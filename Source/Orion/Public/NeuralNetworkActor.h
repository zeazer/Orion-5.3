// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeuralNetworkActor.generated.h"

UCLASS()
class ORION_API ANeuralNetworkActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANeuralNetworkActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};

USTRUCT(BlueprintType)
struct ORION_API FDataPoint
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite)
	TArray<double> Inputs;
	UPROPERTY(BlueprintReadWrite)
	TArray<double> ExpectedOutputs;
};

struct ORION_API FLayer
{
	int NumNodesIn;
	int NumNodesOut;
	TArray<TArray<double>> CostGradientW;
	TArray<double> CostGradientB;
	TArray<TArray<double>> Weights;
	TArray<double> Biases;
	TArray<double> Activations;
	TArray<double> WeightedInputs;

	void InitializeRandomWeights()
	{
		for (int NodeIn = 0; NodeIn < NumNodesIn; ++NodeIn)
		{
			for (int NodeOut = 0; NodeOut < NumNodesOut; ++NodeOut)
			{
				double Randomvalue = FMath::RandRange(-1.00, 1.00);
				Weights[NodeIn][NodeOut] = Randomvalue / sqrt(NumNodesIn);
			}
		}
	}

	FLayer(const int InNumNodesIn, const int InNumNodesOut)
	{
		NumNodesIn = InNumNodesIn;
		NumNodesOut = InNumNodesOut;

		//Initialize Weights
		for (int x = 0; x < NumNodesIn; ++x)
		{
			Weights.Emplace();
			for (int y = 0; y < NumNodesOut; ++y)
			{
				Weights[x].Emplace(0);
			}
		}

		//Initialize Biases
		for (int i = 0; i < NumNodesOut; ++i)
		{
			Biases.Emplace(0);
		}

		for (int x = 0; x < NumNodesIn; ++x)
		{
			CostGradientW.Emplace();
			for (int y = 0; y < NumNodesOut; ++y)
			{
				CostGradientW[x].Emplace(0);
			}
		}

		for (int i = 0; i < NumNodesOut; ++i)
		{
			CostGradientB.Emplace(0);
		}
		InitializeRandomWeights();
	}

	TArray<double> CalculateOutputs(TArray<double> Inputs)
	{
		Activations.Empty();
		WeightedInputs.Empty();
		for (int NodeOut = 0; NodeOut < NumNodesOut; ++NodeOut)
		{
			Activations.Emplace();
			WeightedInputs.Emplace();
			WeightedInputs[NodeOut] = Biases[NodeOut];
			for (int NodeIn = 0; NodeIn < NumNodesIn; ++NodeIn)
			{
				WeightedInputs[NodeOut] += Inputs[NodeIn] * Weights[NodeIn][NodeOut];
			}
			Activations[NodeOut] = ActivationFunction(WeightedInputs[NodeOut]);
		}
		return Activations;
	}

	double ActivationFunction(const double WeightedInput)
	{
		return 1 / (1 + FMath::Exp(-WeightedInput));
	}

	double ActivationFunctionDerivative(const double WeightedInput)
	{
		const double Activation = ActivationFunction(WeightedInput);
		return Activation * (1 - Activation);
	}

	double NodeCost(const double OutputActivation, const double ExpectedOutput)
	{
		const double Error = OutputActivation - ExpectedOutput;
		return Error * Error;
	}

	double NodeCostDerivative(const double OutputActivation, const double ExpectedOutput)
	{
		return 2 * (OutputActivation - ExpectedOutput);
	}


	void ApplyGradients(const double LearnRate)
	{
		for (int NodeOut = 0; NodeOut < NumNodesOut; ++NodeOut)
		{
			Biases[NodeOut] -= CostGradientB[NodeOut] * LearnRate;
			for (int NodeIn = 0; NodeIn < NumNodesIn; ++NodeIn)
			{
				Weights[NodeIn][NodeOut] -= CostGradientW[NodeIn][NodeOut] * LearnRate;
			}
		}
	}

	TArray<double> CalculateOutputLayerNodeValues(const TArray<double>& ExpectedOutputs)
	{
		TArray<double> NodeValues;
		NodeValues.Init(0, ExpectedOutputs.Num());

		for (int i = 0; i < NodeValues.Num(); ++i)
		{
			const double CostDerivative = NodeCostDerivative(Activations[i], ExpectedOutputs[i]);
			const double ActivationDerivative = ActivationFunctionDerivative(WeightedInputs[i]);
			NodeValues[i] = ActivationDerivative * CostDerivative;
		}

		return NodeValues;
	}

	void UpdateGradients(const TArray<double>& Inputs, const TArray<double>& NodeValues)
	{
		for (int NodeOut = 0; NodeOut < NumNodesOut; ++NodeOut)
		{
			for (int NodeIn = 0; NodeIn < NumNodesIn; ++NodeIn)
			{
				const double DerivativeCostWrtWeight = Inputs[NodeIn] * NodeValues[NodeOut];
				CostGradientW[NodeIn][NodeOut] += DerivativeCostWrtWeight;
			}

			const double DerivativeCostWrtBias = 1 * NodeValues[NodeOut];
			CostGradientB[NodeOut] += DerivativeCostWrtBias;
		}
	}

	TArray<double> CalculateHiddenLayerNodeValues(FLayer OldLayer, TArray<double> OldNodeValues)
	{
		TArray<double> NewNodeValues;
		NewNodeValues.Init(0.000, NumNodesOut);

		for (int NewNodeIndex = 0; NewNodeIndex < NewNodeValues.Num(); ++NewNodeIndex)
		{
			double NewNodeValue = 0;
			for (int OldNodeIndex = 0; OldNodeIndex < OldNodeValues.Num(); ++OldNodeIndex)
			{
				const double WeightedInputDerivative = OldLayer.Weights[NewNodeIndex][OldNodeIndex];
				NewNodeValue += WeightedInputDerivative * OldNodeValues[OldNodeIndex];
			}
			NewNodeValue *= ActivationFunctionDerivative(WeightedInputs[NewNodeIndex]);
			NewNodeValues[NewNodeIndex] = NewNodeValue;
		}

		return NewNodeValues;
	}
};

struct ORION_API FNeuralNetwork
{
	TArray<FLayer> Layers;
	double InputValue = 0;

	FNeuralNetwork(const TArray<int>& LayerSize)
	{
		for (int i = 0; i < LayerSize.Num() - 1; ++i)
		{
			Layers.Add(FLayer(LayerSize[i], LayerSize[i + 1]));
		}
	}

	int IndexOfMaxValue(const TArray<double>& Values)
	{
		int HighestValue = 0;
		int Index = 0;
		for (int i = 0; i < Values.Num(); ++i)
		{
			if (Values[i] > HighestValue)
			{
				HighestValue = Values[i];
				Index = i;
			}
		}
		return Index;
	}

	TArray<double> CalculateOutputs(TArray<double> Inputs)
	{
		for (auto Layer : Layers)
		{
			Inputs = Layer.CalculateOutputs(Inputs);
		}
		return Inputs;
	}

	int Classify(const TArray<double>& Inputs)
	{
		const TArray<double> Outputs = CalculateOutputs(Inputs);
		return IndexOfMaxValue(Outputs);
	}

	double Cost(FDataPoint DataPoint)
	{
		TArray<double> Outputs = CalculateOutputs(DataPoint.Inputs);
		FLayer OutputLayer = Layers[Layers.Num() - 1];
		double Cost = 0;

		for (int NodeOut = 0; NodeOut < Outputs.Num(); ++NodeOut)
		{
			Cost += OutputLayer.NodeCost(Outputs[NodeOut], DataPoint.ExpectedOutputs[NodeOut]);
		}
		return Cost;
	}

	double Cost(const TArray<FDataPoint>& DataPoints)
	{
		double TotalCost = 0;
		for (const auto DataPoint : DataPoints)
		{
			TotalCost += Cost(DataPoint);
		}
		return TotalCost / DataPoints.Num();
	}

	double Function(double x)
	{
		return 0.2 * pow(x, 4) + 0.1 * pow(x, 3) - pow(x, 2) + 2;
	}

	double Derivative(double x)
	{
		return 2 * x - 3;
	}

	void Init(double RandomValue)
	{
		InputValue = RandomValue;
	}

	void Learn(const TArray<FDataPoint>& TrainingData, double LearnRate)
	{
		// const double h = 0.000001;
		// const double OriginalCost = Cost(TrainingData);
		//
		// for (auto Layer : Layers)
		// {
		// 	for (int NodeIn = 0; NodeIn < Layer.NumNodesIn; ++NodeIn)
		// 	{
		// 		for (int NodeOut = 0; NodeOut < Layer.NumNodesOut; ++NodeOut)
		// 		{
		// 			Layer.Weights[NodeIn][NodeOut] += h;
		// 			const double DeltaCost = Cost(TrainingData) - OriginalCost;
		// 			Layer.Weights[NodeIn][NodeOut] -= h;
		// 			Layer.CostGradientW[NodeIn][NodeOut] = DeltaCost / h;
		// 		}
		// 	}
		// 	for (int BiasIndex = 0; BiasIndex < Layer.Biases.Num(); ++BiasIndex)
		// 	{
		// 		Layer.Biases[BiasIndex] += h;
		// 		const double DeltaCost = Cost(TrainingData) - OriginalCost;
		// 		Layer.Biases[BiasIndex] -= h;
		// 		Layer.CostGradientB[BiasIndex] = DeltaCost / h;
		// 	}
		// }

		for (auto DataPoint : TrainingData)
		{
			UpdateAllGradients(DataPoint);
		}

		//ApplyAllGradients
		for (auto Layer : Layers)
		{
			Layer.ApplyGradients(LearnRate / TrainingData.Num());
		}
	}

	void UpdateAllGradients(const FDataPoint& DataPoint)
	{
		CalculateOutputs(DataPoint.Inputs);

		auto OutputLayer = Layers[Layers.Num() - 1];
		TArray<double> NodeValues = OutputLayer.CalculateOutputLayerNodeValues(DataPoint.ExpectedOutputs);
		OutputLayer.UpdateGradients(DataPoint.Inputs, NodeValues);

		for (int HiddenLayerIndex = Layers.Num() - 2; HiddenLayerIndex >= 0; HiddenLayerIndex--)
		{
			auto HiddenLayer = Layers[HiddenLayerIndex];
			NodeValues = HiddenLayer.CalculateHiddenLayerNodeValues(Layers[HiddenLayerIndex + 1], NodeValues);
			HiddenLayer.UpdateGradients(DataPoint.Inputs, NodeValues);
		}
	}
};
