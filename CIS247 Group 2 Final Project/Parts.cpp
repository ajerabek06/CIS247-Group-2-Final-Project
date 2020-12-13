#include "Header.h"
using namespace std;

//Constructor definitions

Parts::Parts()
{
	manufacture = "Unknown";
	model = "Unknown";
	price = 0.0;
}
Parts::Parts(string man, string mod, double price)
{
	manufacture = man;
	model = mod;
	price = price;
}
GPU::GPU(string man, string mod, double pr, int mem)
{
	manufacture = man;
	model = mod;
	price = pr;
	memory = mem;
}
CPU::CPU(string man,  string mod, double pr, string chip, double clock)
{
	manufacture = man;
	model = mod;
	price = pr;
	chipSet = chip;
	clockSpeed = clock;
}
RAM::RAM(string man, string mod, double pr, double clock, int mem) {
	manufacture = man;
	model = mod;
	price = pr;
	clockSpeed = clock;
	memory = mem;	
}
MOBO::MOBO(string man, string mod, double pr, string chip) {
	manufacture = man;
	model = mod;
	price = pr;
	chipSet = chip;
}


//Accessors definitions

//Parts Accessors
string Parts::getManufacture() {
	return manufacture;
}
string Parts::getModel() {
	return model;
}
double Parts::getPrice() {
	return price;
}
void Parts::setManufacture(string man)
{
	manufacture = man;
}
void Parts::setModel(string mod)
{
	model = mod;
}
void Parts::setPrice(double price)
{
	this->price = price;
}

string Parts::toString()
{
	stringstream ss;
	ss << "Manufacture: " << getManufacture() << endl;
	ss << "Model: " << getModel() << endl;
	ss << "Price: $" << getPrice() << endl;

	return ss.str();
}

string Parts::toCSV()
{
	stringstream ss;

	ss << getManufacture() << "," << getModel() << "," << getPrice();

	return ss.str();
}

void Parts::consumeData(vector<string> data)
{
	if (data.size() >= 1)
		setManufacture(data[0]);
	
	if (data.size() >= 2)
		setModel(data[1]);

	if (data.size() >= 3)
	{
		double price = stod(data[2]);
		setPrice(price);
	}
		
}

//GPU Accessors
int GPU::getMemory() {
	return memory;
}
void GPU::setMemory(int mem)
{
	memory = mem;
}

string GPU::toString()
{
	stringstream ss;

	ss << "Memory: " << getMemory() << endl;

	return Parts::toString() + ss.str();
}

string GPU::toCSV()
{
	stringstream ss;

	ss << "," << getMemory();
	return Parts::toCSV() + ss.str();
}

void GPU::consumeData(vector<string> data)
{
	Parts::consumeData(data);

	if (data.size() >= 4)
		setMemory(std::stoi(data[3]));
}

//CPU Accessors
string CPU::getChipSet()
{
	return chipSet;
}
double CPU::getClockSpeed() {
	return clockSpeed;
}
void CPU::setChipSet(string chip)
{
	chipSet = chip;
}
void CPU::setClockSpeed(double clock)
{
	clockSpeed = clock;
}

string CPU::toString()
{
	stringstream ss;
	ss << "Clockspeed: " << getClockSpeed() << endl;
	ss << "Chipset: " << getChipSet() << endl;

	return Parts::toString() + ss.str();
}

string CPU::toCSV()
{
	stringstream ss;

	ss << "," << getClockSpeed();
	ss << "," << getChipSet();

	return Parts::toCSV() + ss.str();
}

void CPU::consumeData(vector<string> data)
{
	Parts::consumeData(data);

	if (data.size() >= 4)
		setClockSpeed(std::stod(data[3]));
	if (data.size() >= 5)
		setChipSet(data[4]);
}

//RAM Accessors
double RAM::getClockSpeed() {
	return clockSpeed;
}
int RAM::getMemory() {
	return memory;
}
void RAM::setClockSpeed(double clock)
{
	clockSpeed = clock;
}
void RAM::setMemory(int mem)
{
	memory = mem;
}

string RAM::toString()
{
	stringstream ss;
	ss << "Memory: " << getMemory() << endl;
	ss << "Clockspeed: " << getClockSpeed() << endl;

	return Parts::toString() + ss.str();
}

string RAM::toCSV()
{
	stringstream ss;
	ss << "," << getMemory();
	ss << "," << getClockSpeed();

	return Parts::toCSV() + ss.str();
}

void RAM::consumeData(vector<string> data)
{
	Parts::consumeData(data);

	if (data.size() >= 4)
		setMemory(std::stoi(data[3]));
	if (data.size() >= 5)
		setClockSpeed(std::stod(data[4]));
}

//MOBO Accessors
string MOBO::getChipSet() {
	return chipSet;
}
void MOBO::setChipSet(string chip)
{
	chipSet = chip;
}

string MOBO::toString()
{
	stringstream ss;
	ss << "Chipset: " << getChipSet() << endl;

	return Parts::toString() + ss.str();
}

string MOBO::toCSV()
{
	stringstream ss;
	ss << "," << getChipSet();

	return Parts::toCSV() + ss.str();
}

void MOBO::consumeData(vector<string> data)
{
	if (data.size() >= 4)
		setChipSet(data[3]);
}