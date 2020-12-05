/*------------------------------------------------------
Purpose:  This class will hold Parts 
			for things such as CPU, GPU, RAM, Motherboards

			Done
*/

#pragma once

#include "Header.h"
using namespace std;

//Default Parts attributes for every part: Manufacture, Model, Price
class Parts 
{
protected:
	string manufacture, model;
	double price;

public:
	//Constructor
	Parts();
	Parts(string, string, double);
	


	string getManufacture();
	string getModel();
	double getPrice();

	void setManufacture(string);
	void setModel(string);
	void setPrice(double);	
}; 
class GPU: public Parts
{
private:
	int memory;
	
public:
	//Constructor
	GPU(string, string, double,int);
	
	//Accessors
	int getMemory();
	void setMemory(int);	
};
class CPU: public Parts
{
private:
	string chipSet;
	double clockSpeed;
public:
	CPU(string, string, double,string, double);

	//Accessors
	string getChipSet();
	double getClockSpeed();
	
	void setChipSet(string);
	void setClockSpeed(double);
	
};
class RAM: public Parts
{
private:	
	int memory;
	double clockSpeed;
public:
	RAM(string, string, double, double, int);

	//Accessors
	double getClockSpeed();
	int getMemory();
	void setClockSpeed(double);
	void setMemory(int);
};
class MOBO: public Parts
{
private:
	string chipSet;
	
public:
	MOBO(string, string, double, string);

	//Accessors
	string getChipSet();
	void setChipSet(string);
};




