//------------------------------------------------------
//Purpose:  This class will hold Internal part methods
//			for things such as CPU, GPU, RAM, Motherboards
//
//------------------------------------------------------

#pragma once

#include <iostream>
#include <vector>
using namespace std;

//Settup files for storage
const string GPU_file = "GPU's.vsv";
const string CPU_file = "CPU's.vsv";
const string RAM_file = "RAM.vsv";
const string MOBO_file = "MOBOs.vsv";

class GPU
{
private:
	string manufacture, model;
	int memory;
	double price;
	

public:
	//Constructor
	GPU(string man, string mod, int mem, double pri);
	
	//Accessors
	string getManufacture();
	string getModel();
	int getMemory();
	double getPrice();
	//Setters
	void setManufacture(string man);
	void setModel(string mod);
	void setMemory(int mem);
	void setPrice(double pri);
};
class CPU
{
private:
	string manufacture, model;
	double clockSpeed, price;
public:
	CPU(string mann, string mod, double clock, double pri);

	//Accessors
	string getManufacture();
	string getModel();
	double getClockSpeed();
	double getPrice();
	//Setters
	void setManufacture(string man);
	void setModel(string mod);
	void setClockSpeed(double clock);
	void setPrice(double pri);
};
class RAM
{
private:
	string manufacture, model;
	int memory;
	double clockSpeed, price;
public:
	RAM(string, string, double , int, double);

	//Accessors
	string getManufacture();
	string getModel();
	double getClockSpeed();
	int getMemory();
	double getPrice();
};
class MOBO
{
private:
	string manufacture, model,chipSet;
	double price;
public:
	MOBO(string man, string mod, string chip, double price);

	//Accessors
	string getManufacture();
	string getModel();
	string getChipSet();
	double getPrice();
};



//Setters
//	void setManufacture(string man);
//	void setModel(string mod);
//	void setChipSet(string chip);
//	void setclockSpeed(double clock);
//	void setMemory(int mem);
//	void setPrice(double price);
