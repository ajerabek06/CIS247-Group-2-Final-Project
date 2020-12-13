#include "MOBOEditorMenu.h"
#include "Parts.h"
#include "PartFactory.h"
#include "Util.h"

void MOBOEditorMenu::add()
{
	auto part = PartFactory::CreateMOBO();
	Parts::SaveToFile<MOBO>(Filename, part);
}
