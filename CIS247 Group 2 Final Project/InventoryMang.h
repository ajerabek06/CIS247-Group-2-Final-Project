#pragma once
#include "Header.h"

using namespace std;

class Inventory:
	public GPU,CPU,RAM,MOBO
{
public:

	//Create Internal Parts
	GPU createGPU();
	CPU createCPU();
	RAM createRAM();
	MOBO createMOBO();

	//Save Functions
	void saveGPU(GPU&);
	void saveCPU(CPU&);
	void saveRAM(RAM&);
	void saveMOBO(MOBO&);


private:

};