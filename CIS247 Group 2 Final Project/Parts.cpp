/*
		Done

*/


#include "Header.h"

using namespace std;

//Constructor definitions

Parts::Parts(string man, string mod, double price)
{
	manufacture = man;
	model = mod;
	price = price;
}
GPU::GPU(string man, string mod, double price, int mem): Parts(man,mod,price)
{
	memory = mem;
}




//CPU::CPU(string man,  string mod, double price, string chip, double clock): Parts(man, mod, price) 
//{
//	clockSpeed = clock;
//}
//RAM::RAM(string man, string mod, double clock, int mem, double price) {
//	manufacture = man;
//	model = mod;
//	clockSpeed = clock;
//	memory = mem;
//	price = price;
//}
//MOBO::MOBO(string man, string mod, double price, string chip) {
//	manufacture = man;
//	model = mod;
//	chipSet = chip;
//	price = price;
//}


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
	price = price;
}

//GPU Accessors
int GPU::getMemory() {
	return memory;
}
void GPU::setMemory(int mem)
{
	memory = mem;
}

//CPU Accessors
double CPU::getClockSpeed() {
	return clockSpeed;
}

//RAM Accessors
double RAM::getClockSpeed() {
	return clockSpeed;
}
int RAM::getMemory() {
	return memory;
}

//MOBO Accessors
string MOBO::getChipSet() {
	return chipSet;
}



string Parts::toString() const
{
	stringstream ss;

	ss << "Manufacturer: " << this->manufacture << endl;
	ss << "Model: " << this->model << endl;
	ss << "Price: " << this->price << endl;

	return ss.str();
}
string GPU::toString() const
{
	stringstream ss(Parts::toString());

	ss << "Memory: " << endl;

	return ss.str();
}

std::ostream& operator<<(std::ostream& os, const Parts& part)
{
	os << part.toString() << endl;
	return os;
}