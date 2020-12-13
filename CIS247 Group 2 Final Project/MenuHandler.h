//------------------------------------------------------
//Purpose:  This class will hold Menu methods
//			for differnt menues used in the program
//
//------------------------------------------------------


#pragma once
#include <map>
#include <string>
#include <typeinfo>
#include <variant>
#include <vector>

using namespace std;

class Menu;

// Helper class that helps manage menu to menu navigation
class MenuHandler
{
private:
	// We only want ONE instance of menu handler
	static MenuHandler *instance;
public:
	// The menu that is currently active
	// Should only have one menu displayed(static)
	static Menu* ActiveMenu;

	// Retrieve the current instance of MenuHandler
	// IF one does not exist... instantiate it and return it
	static MenuHandler *GetInstance()
	{
		if (!instance)
			instance = new MenuHandler;
		return instance;
	}

	// In the event you want a menu to trace back to another
	// This function helps set that up
	// 
	// T = the class you're coming from
	// K = the class  you're going to
	template<class T, class K>
	static void FromTo(T *from)
	{
		/*
			We want to create a submenu, meaning
			the current item (from) is our parent
			We insantiate our submenu (K)
			and Enter it, whilst passing our parent
		*/

		Menu* menu = new K();
		menu->Enter(from);		
		MenuHandler::ActiveMenu = menu;
	}
};
