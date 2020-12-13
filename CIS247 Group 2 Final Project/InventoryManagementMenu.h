#pragma once
#include "Menu.h"
class InventoryManagementMenu :
    public Menu
{

protected:
    void initialize();
    vector<string> options;

public:
    InventoryManagementMenu() : Menu()
    {
    }

    int PickMenuOption();
    void HandleMenuOption(int option);
};

