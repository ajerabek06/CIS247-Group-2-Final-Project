#include "CPUEditorMenu.h"
#include "Util.h"
#include "Parts.h"
#include "PartFactory.h"

void CPUEditorMenu::add()
{
	CPU cpu = PartFactory::CreateCPU();
	Parts::SaveToFile(Filename, cpu);
}
