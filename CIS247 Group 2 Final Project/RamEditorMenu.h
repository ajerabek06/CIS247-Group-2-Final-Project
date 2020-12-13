#pragma once
#include "PartEditorMenu.h"
#include "Parts.h"
class RamEditorMenu :
    public PartEditorMenu<RAM>
{
public:
    RamEditorMenu() : PartEditorMenu()
    {
        Filename = "RAM.csv";
        ItemName = "RAM";
        title = ItemName + " " + "Management";
    }
protected:
    void add();
};

