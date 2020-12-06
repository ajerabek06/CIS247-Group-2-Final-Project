/*
	Purpose:  This class will hold Menu methods
			  for differnt menues used in the program

			 
*/


#include "Header.h"

using namespace std;

Inventory* invPtr;  //Pointer for accessing the InventoryManagement functions
Util* utilPtr;


//Main Menu -testing(partial)
void Menus::mainMenu()
{
	string input;
	int userChoice;

	do
	{
		cout << "Main Menu: " << endl;
		cout << "1)Menu Opt 1" << endl;
		cout << "2)Menu Opt 2" << endl;
		cout << "3)Menu Opt 3" << endl;
		cout << "4)Menu Opt 4" << endl;
		cout << "5)Inv Management" << endl;
		cout << "6)Exit" << endl;
		cout << "Please enter you choice: ";
		cin >> userChoice;		
			
	} while (!checkValidInput(1, 6, userChoice));
	
	switch (userChoice)
	{
		case 1 :
			system("cls");
			//code to submenu
			break;
		case 2:
			system("cls");
			//code to submenu
			break;
		case 3:
			system("cls");
			//code to submenu
			break;
		case 4:
			system("cls");
			//code to submenu
			break;
		case 5:
			system("cls");
			inventoryMangMenu();
			break;
		case 6:
			system("cls");
			break;
	}
}
//
//Inventory Management Menu -testing(partial)
void Menus::inventoryMangMenu()
{
	int userChoice;
	
	do
	{
		cout << "Inventory Managment Menu:" << endl;
		cout << "1)Add Item" << endl;
		cout << "2)Remove Item(testing)" << endl;
		cout << "3)View all items" << endl;
		cout << "4)Return to main menu(testing)" << endl;
		cin >> userChoice;
		cin.ignore();
		userChoice = toupper(userChoice);
	} while (!checkValidInput(1, 4, userChoice));
		
	switch (userChoice)
	{
		case 1:
			system("cls");
			addMangSubMenu();
			break;
		case 2:
			system("cls");
			//submenu
			break;
		case 3:
			system("cls");
			viewItemsMenu();
			break;
		case 4:
			system("cls");
			mainMenu();
			break;
	}
	inventoryMangMenu();
}
//
////Adding Items (Managment) submenu(testing)
void Menus::addMangSubMenu()
{
	int userChoice;
	do
	{
		cout << "Adding an item Submenu" << endl;
		cout << "What woudld you like to add?" << endl;
		cout << "1)GPU" << endl;
		cout << "2)CPU" << endl;
		cout << "3)RAM" << endl;
		cout << "4)MOBO" << endl;
		cout << "5)Return to Inventory Mang Menu" << endl;
		cin >> userChoice;
		cin.ignore();
		userChoice = toupper(userChoice);
	} while (!checkValidInput(1, 5, userChoice));
	switch (userChoice)
	{
	case 1:
	{
		system("cls");
		do
		{
			GPU newGPU = invPtr->createGPU();
			invPtr->saveGPU(newGPU);			
		} while (enterAnotherOrReturn());
		break;
	}
	case 2:
	{
		system("cls");
		do
		{
			CPU newCPU = invPtr->createCPU();
			invPtr->saveCPU(newCPU);
		} while (enterAnotherOrReturn());
		break;
	}
	case 3:
	{
		system("cls");
		do
		{
			RAM newRAM = invPtr->createRAM();
			invPtr->saveRAM(newRAM);
		} while (enterAnotherOrReturn());
		break;
	}
	case 4:
	{
		system("cls");
		do
		{
			MOBO newMOBO = invPtr->createMOBO();
			invPtr->saveMOBO(newMOBO);
		} while (enterAnotherOrReturn());
		break;
	}
	case 5:
		system("cls");
		inventoryMangMenu();
		break;
	}
	addMangSubMenu();
}

void Menus::viewItemsMenu()
{
	int userChoice;

	do
	{
		cout << "View Items Menu:" << endl;
		cout << "What List of Items Would You Like to View?";
		cout << "1)GPU's" << endl;
		cout << "2)CPU's" << endl;
		cout << "3)RAM's" << endl;
		cout << "4)MOBO's" << endl;
		cout << "5)Return to Inventory Management menu" << endl;
		cin >> userChoice;
		cin.ignore();
		userChoice = toupper(userChoice);
	} while (!checkValidInput(1, 5, userChoice));

	switch (userChoice)
	{
	case 1:
		system("cls");
		invPtr->printGPU();
		break;
	case 2:
		system("cls");
		invPtr->printCPU();
		break;
	case 3:
		system("cls");
		invPtr->printRAM();
		break;
	case 4:
		system("cls");
		invPtr->printMOBO();
		break;
	case 5:
		system("cls");
		inventoryMangMenu();
		break;
	}
	viewItemsMenu();
}

