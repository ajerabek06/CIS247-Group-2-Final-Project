#pragma once
#include "Header.h"

using namespace std;

class Inventory
{
public:
	GPU gpu1;
	//Internal Parts
	void addGPU();
	void addCPU(string, string, double, double, double);
	void addRAM(string, string, double, int, double);
	void addMOBO(string, string, double,int);

	

	void printGPU();
	void writeGPUToFile();

private:
	int numItems; //track number of items in inventory

	//Internal Parts
	vector<GPU> GPUvect;
	vector<CPU> CPUvect;
	vector<RAM> RAMvect;
	vector<MOBO> MOBOvect;

};