#include "GPUEditorMenu.h"
#include "PartFactory.h"
#include <string>
#include "Parts.h"
#include <iostream>

void GPUEditorMenu::add()
{
	GPU gpu = PartFactory::CreateGPU();
	Parts::SaveToFile<GPU>(Filename, gpu);
}
