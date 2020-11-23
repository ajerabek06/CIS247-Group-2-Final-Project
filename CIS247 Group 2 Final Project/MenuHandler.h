//------------------------------------------------------
//Purpose:  This class will hold Menu methods
//			for differnt menues used in the program
//
//------------------------------------------------------


#pragma once
#include "Header.h"




const int PRICE_WIDTH = 6;	//standardized width for the price column when printing inv contents.
const int NUM_WIDTH = 4;


class Menus
{
private:
	enum addRemoveOpt { ADD, REMOVE };  //for later use int the add remove menu(makes things easier)
public:
	void mainMenu();
	void inventoryMangMenu();
	void viewItemsMenu();
	void addRemoveItemMenu(addRemoveOpt);

	void internalPartsMenu();
	void externalPartsMenu();
	void extraPartsMenu();



	void addMangSubMenu();
	void removeMangSubMenu();

	void addGPUMenu();

};






