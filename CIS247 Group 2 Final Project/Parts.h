/*------------------------------------------------------
Purpose:  This class will hold Parts 
			for things such as CPU, GPU, RAM, Motherboards

			Done
*/

#pragma once

#include "Header.h"
using namespace std;

//Settup files for storage

//Internal Parts
const string GPU_file = "GPU's.csv";
const string CPU_file = "CPU's.csv";
const string RAM_file = "RAM.csv";


//Default Parts attributes for every part: Manufacture, Model, Price
class Parts 
{
private:
	string manufacture, model;
	double price;

public:
	Parts();
	Parts(string, string, double);
	virtual std::string toString()const;


	string getManufacture();
	string getModel();
	double getPrice();

	void setManufacture(string);
	void setModel(string);
	void setPrice(double);
	friend ostream& operator<<(ostream& os, const Parts& part);
}; 
class GPU: public Parts
{
private:
	int memory;
	
public:
	//Constructor
	GPU();
	GPU(string, string, double,int);
	
	//Accessors
	int getMemory();
	void setMemory(int);
	std::string toString() const;
};



class CPU
{
private:
	string manufacture, model;
	double clockSpeed, price;
public:
	CPU(string, string , string , double , double);

	//Accessors
	double getClockSpeed();
	void setClockSpeed();

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




