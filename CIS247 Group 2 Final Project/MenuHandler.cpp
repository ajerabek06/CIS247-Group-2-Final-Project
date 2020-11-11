/*
	Purpose:  This class will hold Menu methods
			  for differnt menues used in the program

			 
*/

#include "MenuHandler.h"
#include "Util.h"
#include "InventoryMang.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//Globally used varables
string addRemovePath; //add or remove option used in multiple functions


//Main Menu -testing(partial)
void menuHandler::mainMenu()
{
	bool exit = false;
	string input;
	int userChoice;
	do
	{
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
			
		} while (!checkValidInput(1, 7, userChoice));
	
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
			exit = true;
			break;
		}
	} while (!exit);
}

//Inventory Management Menu -testing(partial)
void inventoryMangMenu() 
{
	int userChoice;
	bool exit = false;
	do
	{
		do
		{
			cout << "Inventory Managment Menu:" << endl;
			cout << "1)Add Item(testing)" << endl;
			cout << "2)Remove Item(testing)" << endl;
			cout << "3)View all items(testing)" << endl;
			cout << "4)Return to main menu(testing)" << endl;
			cin >> userChoice;
			cin.ignore();
			userChoice = toupper(userChoice);
		} while (!checkValidInput(1, 4, userChoice));
		
		switch (userChoice)
		{
		case 1:
			system("cls");
			addRemoveItemMenu(ADD);
			break;
		case 2:
			system("cls");
			addRemoveItemMenu(REMOVE);
			break;
		case 3:
			system("cls");
			viewItemsMenu();
			break;
		case 4:
			system("cls");
			menuHandler::mainMenu();
			break;
		}
	} while (!exit);
}



//Adding and Removing Items Menu -testing(partial)
void addRemoveItemMenu(addRemoveOpt addRemoveOptInput) 
{
	bool exit = false;
	int userChoice;
	
	if (addRemoveOptInput == ADD)
		addRemovePath = "ADD";
	else if (addRemoveOptInput == REMOVE)
		addRemovePath = "Remove";
	do
	{	
		cout << "What would you like to do:" << endl;
		cout << "1)Add an item (testing)" << endl;
		cout << "2)Remove an item (testing)" << endl;
		cout << "3)View all (testing)" << endl;
		cout << "4)Return to Inv menu" << endl;
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
		//submenu;
		break;
	case 3:
		system("cls");
		//code to submenu
		break;
	case 4:
		system("cls");
		inventoryMangMenu();
		break;
	}
} 

//Adding Items (Managment) submenu(testing)
void addMangSubMenu() 
{
	int userChoice;
	do
	{
		cout << "Adding an item Submenu" << endl;
		cout << "What woudld you like to add?" << endl;
		cout << "1)GPU (testing)" << endl;
		cin >> userChoice;
		cin.ignore();
		userChoice = toupper(userChoice);
	} while (!checkValidInput(1, 4, userChoice));
	switch (userChoice)
	{
	case 1:
		system("cls");
		addGPUMenu();
		break;
	case 2:
		system("cls");
		//submenu;
		break;
	case 3:
		system("cls");
		//code to submenu
		break;
	case 4:
		system("cls");
		inventoryMangMenu();
		break;
	}

}

Inventory GPU; // to initialize the Inventory class

void addGPUMenu() 
{
	string man, mod;
	int mem;
	double price;
	
	cin.ignore();
	cout << "Enter the Manufacture: " << endl;
	getline(cin, man);
	cout << "Enter the Model:" << endl;
	getline(cin, mod);
	cout << "Enter the amount of memory: " << endl;
	cin >> mem;
	cout << "Enter the Price: " << endl;
	cin >> price;
	GPU.addGPU(man,mod,mem,price);

}
//GPU::GPU(string man, string mod, int mem, double price) {
//	manufacture = man;
//	model = mod;
//	memory = mem;
//	price = price;
//}


//Menus for later use?

//Viewing Items Menu -testing
void viewItemsMenu() {

}
//Internal Parts Menu -testing
void internalPartsMenu()
{
	char userChoice;
	
	cout << "Internal Parts Menu" << endl;
	cout << "1)View GPU's" << endl;
	cout << "2)View CPU's" << endl;
	cout << "4)View RAM" << endl;
	cout << "5)View MOBO's" << endl;
	cout << "6 Back to main menu" << endl;
	cin >> userChoice;
	cin.ignore();
	userChoice = toupper(userChoice);

	switch (userChoice)
	{
	case '1':
		//code to submenu
		break;
	case '2':
		//code to submenu
		break;
	case '3':
		//code to submenu
		break;
	case '4':
		//code to submenu
		break;
	case '5':
		//code to submenu
		break;
	case '6':
		system("cls");
		break;
	default:
		cout << "Please enter a valid choice!" << endl;
		break;
	}
	cout << endl;
}
//External Parts Menu -testing
void externalPartsMenu() {

}
//Extra Parts Menu -testing
void extraPartsMenu() {

}