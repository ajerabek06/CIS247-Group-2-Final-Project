/*
	Purpose:  This class will hold Menu methods
			  for differnt menues used in the program

			 
*/


#include "Header.h"

using namespace std;

//Main Menu -testing(partial)

void Menus::mainMenu()
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
void Menus::inventoryMangMenu()
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
			addMangSubMenu();
			break;
		case 2:
			system("cls");
			//code to sub menu
			break;
		case 3:
			system("cls");
			//code to sub menu
			break;
		case 4:
			system("cls");
			mainMenu();
			break;
		}
	} while (!exit);
}


//Adding Items (Managment) submenu(testing)
void Menus::addMangSubMenu()
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

void Menus::addGPUMenu()
{
	string man, mod;
	int mem;
	double price;
	
	cout << "Enter the Manufacture: " << endl;
	getline(cin, man);
	cout << "Enter the Model:" << endl;
	getline(cin, mod);
	cout << "Enter the amount of memory: " << endl;
	cin >> mem;
	cout << "Enter the Price: " << endl;
	cin >> price;
	//Inventory::addGPU(man,mod,price,mem);

}



