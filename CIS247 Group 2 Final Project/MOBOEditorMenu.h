#pragma once
#include "PartEditorMenu.h"
#include "Parts.h"

class MOBOEditorMenu :
    public PartEditorMenu<MOBO>
{
public:
    MOBOEditorMenu() : PartEditorMenu()
    {
        Filename = "mobo.csv";
        ItemName = "Motherboard";
        title = ItemName + " " + "Management";
    }
protected:
    void add();
};

