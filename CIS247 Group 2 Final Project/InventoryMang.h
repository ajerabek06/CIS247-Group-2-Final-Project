#pragma once
#include "Header.h"

using namespace std;

class Inventory
{
public:
	Inventory(); //default

	//Internal Parts
	void addGPU(string, string, double, int);
	void addCPU(string, string, string, double, double);
	void addRAM(string, string, double, int, double);
	void addMOBO(string, string, string, double);

	void printGPU();

private:
	int numItems; //track number of items in inventory

	//Internal Parts
	vector<GPU> GPUvect;
	vector<CPU> CPUvect;
	vector<RAM> RAMvect;
	vector<MOBO> MOBOvect;

};