#pragma once
#include "PartEditorMenu.h"
#include <string>
#include "Parts.h"
#include "Header.h"
class GPUEditorMenu : public PartEditorMenu<GPU>
{
public:
	GPUEditorMenu() : PartEditorMenu()
	{
		Filename = "GPU.csv";
		ItemName = "GPU";
		title = ItemName + " " + "Management";
	}
protected:
	void add();
};

