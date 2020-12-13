#include "RamEditorMenu.h"

#include "Parts.h"
#include "PartFactory.h"
#include "Util.h"
void RamEditorMenu::add()
{
	RAM ram = PartFactory::CreateRAM();
	Parts::SaveToFile<RAM>(Filename, ram);
}
