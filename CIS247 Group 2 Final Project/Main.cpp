// ---------------------------------------------------------------
// Programming:				PC Building Application
// Developer:				Group 2
// Date Written:            Started:  Nov 5 2020
//							Finished: 
// Purpose:                 CIS247 Group 2 final project
//                                                 
// ---------------------------------------------------------------

#include "Header.h"
#include "Menu.h"
#include "InventoryManagementMenu.h"
#include "MenuHandler.h"

int main()
{	
	cout << "Hello and welcome to Group 2's CIS247 Final Project app" << endl;
	MenuHandler* handler = MenuHandler::GetInstance();
	Menu* menu = new InventoryManagementMenu();
	menu->Enter();

	handler->ActiveMenu = menu;

	// So long as there is an active menu AND we're active.... do the things!
	while (handler->ActiveMenu != nullptr && handler->ActiveMenu->isActive)
	{
		int option = handler->ActiveMenu->PickMenuOption();
		handler->ActiveMenu->HandleMenuOption(option);
	}

	cout << "Thank you!\n";
	system("pause");
	return 0;
}
