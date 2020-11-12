/*
	Purpose:  This class will hold Menu methods
			  for differnt menues used in the program

			 
*/


#include "Util.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include "MenuHandler.h"
#include "Parts.h"
#include <vector>

using namespace std;





//Main Menu -testing(partial)

void mainMenu(Inventory& inv)
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
			inventoryMangMenu(inv);
			break;
		case 6:
			system("cls");
			exit = true;
			break;
		}
	} while (!exit);
}

//Inventory Management Menu -testing(partial)
void inventoryMangMenu(Inventory& inv)
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
			addRemoveItemMenu(inv,ADD);
			break;
		case 2:
			system("cls");
			addRemoveItemMenu(inv,REMOVE);
			break;
		case 3:
			system("cls");
			inv.printGPU();
			break;
		case 4:
			system("cls");
			mainMenu(inv);
			break;
		}
	} while (!exit);
}



//Adding and Removing Items Menu -testing(partial)
void addRemoveItemMenu(Inventory& inv,addRemoveOpt addRemoveOptInput)
{
	bool exit = false;
	int userChoice;
	string addRemovePath;
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
		addMangSubMenu(inv);
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
		inventoryMangMenu(inv);
		break;
	}
} 

//Adding Items (Managment) submenu(testing)
void addMangSubMenu(Inventory& inv) 
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
		addGPUMenu(inv);
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
		inventoryMangMenu(inv);
		break;
	}

}

void addGPUMenu(Inventory& inv) 
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
	inv.addGPU(man,mod,mem,price);

}



