#pragma once
#include "Parts.h"
#include <tuple>
#include<string>
using namespace std;

// A static class that assists with the prompting/creation of various Parts
class PartFactory
{
public:
	// Prompt the user for all the information needed for a basic part
	// through a tuple of (0)Manufacture, (1)Model, (2)Price
	static tuple<string, string, double> GetBasicInfo();

	// Prompt the user for all the information needed for a GPU
	static GPU CreateGPU();

	// Prompt the user for all the information needed for a CPU
	static CPU CreateCPU();

	// Prompt the user for all the information needed for a Motherboard
	static MOBO CreateMOBO();

	// Prompt the user for all the information needed for RAM
	static RAM CreateRAM();
};

