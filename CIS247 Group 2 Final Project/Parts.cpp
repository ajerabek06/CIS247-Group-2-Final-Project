#include "Header.h"

using namespace std;

//Constructor definitions

Parts::Parts()
{
	manufacture = "Unknown";
	model = "Uknown";
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

//MOBO Accessors
string MOBO::getChipSet() {
	return chipSet;
}
void MOBO::setChipSet(string chip)
{
	chipSet = chip;
}
