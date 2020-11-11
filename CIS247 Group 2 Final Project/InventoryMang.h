#pragma once

#include <vector>
#include "Parts.h"

using namespace std;
class Inventory
{
public:
	Inventory(); //default
	//Internal Parts
	void addGPU(string, string, int, double);
	void addCPU(string, string, string, double, double);
	void addRAM(string, string, double, int, double);
	void addMOBO(string, string, string, double);

private:
	int numItems; //track number of items in inventory
	
	//Internal Parts
	vector<GPU> GPUvect;  // Unsure why this is errored out...
	vector<CPU> CPUvect;
	vector<RAM> RAMvect;
	vector<MOBO> MOBOvect;
};
