#include "InventoryManagementMenu.h"
#include <iostream>
#include "Util.h"
#include "MenuHandler.h"
#include "GPUEditorMenu.h"
#include "CPUEditorMenu.h"
#include "RamEditorMenu.h"
#include "MOBOEditorMenu.h"

void InventoryManagementMenu::initialize()
{
	this->options.clear();
	this->options.push_back("Manage GPUs");
	this->options.push_back("Manage CPUs");
	this->options.push_back("Manage Motherboards");
	this->options.push_back("Manage RAM");

	this->title = "Inventory Management Menu";
}

int InventoryManagementMenu::PickMenuOption()
{
	cout << title << ":" << endl;
	return Util::SelectOption(options);
}

void InventoryManagementMenu::HandleMenuOption(int option)
{
	switch (option)
	{
	case 0:
		MenuHandler::FromTo<InventoryManagementMenu, GPUEditorMenu>(this);
		break;
	case 1:
		MenuHandler::FromTo<InventoryManagementMenu, CPUEditorMenu>(this);
		break;
	case 2:
		MenuHandler::FromTo<InventoryManagementMenu, MOBOEditorMenu>(this);
		break;
	case 3:
		MenuHandler::FromTo<InventoryManagementMenu, RamEditorMenu>(this);
		break;
	case 4:
		Exit();
		break;
	}
}