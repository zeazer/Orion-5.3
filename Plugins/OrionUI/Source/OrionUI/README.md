# OrionUI

Is made to implement some hack friday project related to UI.
It currently implements the Model View Controller design pattern, 
2 asynchronous blueprint functions that takes soft class pointers, 
a smaller UI system structure that can be used to further implemented more UI menu related functionality.

# Async

In async two classes exist that takes in a soft class pointer and returns a loaded class object of that type. 
They both work the same except that the loop class that returns an index and an object as the specified count.

# Controllers

A new controller only needs to inherit from OrionUIControllerBase and implement the OnModelUpdate function.
The controller will then be able to access the data it needs from the IUIOrionModelInterface and the controller 
decides how the data is used.
Arrow controller, Enemy tracker controller and Health controller are examples of how a controller 
could be implemented in the Model View Controller pattern.

# Interfaces

IUIOrionModelInterface is where the access to data needs to be declared so that then the actual model can define them.
Also contains examples of possible way to use interfaces to keep the UI and rest of gameplay separated.
For the start menu system to work the player controller needs to implement the IUIOrionController interface and call it when needed.
It my case it is in OnPreClientTravel and OnBeginPlay.

# Widgets

Menu widget is mainly used for menus and is looked for on begin play if OrionHUD is used to add those that 
inherits from menu widget to the menu system, and with that is coupled with its MenuId.
User widget is the one that holds the UI controller functionality and any additional user widget functionality in the future.
Anim User widget adds in and out animation functionality that is meant to be used when a menu widget is displayed or hidden.
Arrow widget, Enemy tracker widget and Health widgets are examples of the widget in the Model View Controller pattern.

# UI

You will need a HUD that inherits from OrionHUD to gain all the functionality needed for the system to work.
The OrionHUD also contains an overrideable GetModel function that developers can implement themselves so that 
the system have access to the models interface.
The HUD collects all menu widgets from a folder path and sub folder paths specified in 
the "Project Settings" -> "Asset Manager" -> "Primary Asset Types to Scan".
There you need to add "MenuWidgets" as the primary asset type, OrionMenuWidget as Asset Base Class and 
the folder path into the Directories to where you plan to store the menu widgets.
The master canvas is where the menu containers is stored and menus needs to go through this to be added to the screen.

# Function Library

Contains functions that makes it easier to access functionality of the OrionUI system.


# Good additions

1.  A proper button class with necessary states, such as selected/focused and possibility of stickiness. (OrionButton and SOrionButton)
2.  From anubis add a lot of good and useful settings from user widget but move them into a struct (OrionUserWidgetStyle) independent of user widget.
3.  Possibly the Anubis Key InputSelector but bit cleaned up.
4.  Platform system for UI. Not sure on solution yet, but was thinking that because of MVC it would 
    technically be easy to just switch out the view from a pc view to a ps or xbox view. But would need to figure out the implementation.
