//------------------------------------------------------
//Purpose:  This class will hold Menu methods
//			for differnt menues used in the program
//
//------------------------------------------------------


#pragma once
#include "Header.h"

enum addRemoveOpt { ADD, REMOVE };  //for later use int the add remove menu(makes things easier)

class Menus
{
private:
	

public:
	void mainMenu();
	void inventoryMangMenu();
	void addMangSubMenu();
	void viewItemsMenu();

	//void addRemoveItemMenu(addRemoveOpt);
	//void removeMangSubMenu();
};







