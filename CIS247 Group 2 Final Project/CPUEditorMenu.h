#pragma once
#include "PartEditorMenu.h"
#include "Parts.h"
class CPUEditorMenu :
    public PartEditorMenu<CPU>
{
public:
    CPUEditorMenu() : PartEditorMenu()
    {
        Filename = "CPU.csv";
        ItemName = "CPU";
        title = ItemName + " " + "Management";
    }
protected:
    void add();
};

