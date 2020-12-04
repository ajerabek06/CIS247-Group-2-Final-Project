#pragma once
#include "Header.h"

using namespace std;

class Inventory:
	public GPU
{
public:

	//Internal Parts
	void saveGPU();
	void addBasicParts();
	void addGPU();


	string getMan();
	string getMod();
	double getPrice();

	void printGPU();
	void writeGPUToFile();

private:

};