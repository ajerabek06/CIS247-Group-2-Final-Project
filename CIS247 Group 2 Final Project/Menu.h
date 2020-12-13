#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "MenuHandler.h"
using namespace std;


// Abstract class
// Gives basic contract for all menus to follow
class Menu
{
private:

protected:
	/// List of options that shall display	
	vector<string> options;
	virtual void initialize() = 0;
	string title = "Unknown";

public:
	Menu() 
	{
	}

	// If not nullptr -- indicates which menu to go back to
	// If nullptr -- indicates the program should probably exit
	
	Menu* parentMenu = nullptr;

	/// Is the user currently inside of this menu
	
	bool isActive = false;

	
	// Sets this menu as active
	// Also does some basic initialization
	void Enter() 
	{ 
		this->isActive = true; 
		this->initialize();
	}

	
	// Does some basic initialization stuff to get the menu ready
	// for user input	
	template<typename T>
	void Enter(T *parent)
	{
		system("cls");
		this->parentMenu = parent;
		Enter();
	}

	// Sets this menu as inactive
	// If parent menu is set, it shall go back to that one
	virtual void Exit()
	{
		system("cls");

		this->isActive = false;

		// If we have a parent menu exit
		if (parentMenu != nullptr)
		{
			parentMenu->Enter();
			MenuHandler::ActiveMenu = parentMenu;
		}
	}

	// Main loop will be here
	// Gets the option the user picked
	virtual int PickMenuOption() = 0; // <--- this is an abstract implementation. Forces children to implement it
	
	// What to do with the user's selection	
	virtual void HandleMenuOption(int option) = 0;
};

