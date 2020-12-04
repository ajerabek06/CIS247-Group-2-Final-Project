
#include "Header.h"

using namespace std;

const string gpuFile = "List of GPU's.csv";
const string cpuFile = "List of CPU's.csv";
const string RamFile = "List of RAM.csv";
const string MoboFile = "List of MOBO's.csv";

//Tuple function to accept the basic three attributes common to every class
tuple <string, string, double> basicInfo()
{
	string man, mod;
	double price;
	cout << "Please enter the following Information" << endl;
	cout << "Manufacture: ";
	getline(cin, man);
	cout << "Model: ";
	getline(cin, mod);
	cout << "Price: ";
	cin >> price;
	return make_tuple(man, mod, price);


}


//Functions to create objects for the different parts
GPU Inventory::createGPU()
{
	int mem;
	auto info = basicInfo();
	cout << "Memory: ";
	cin >> mem;
	return GPU(get<0>(info), get<1>(info), get<2>(info), mem);
}
CPU Inventory::createCPU()
{
	string chip;
	double clock;
	auto info = basicInfo();
	cin.ignore();
	cout << "Chip Set: ";
	getline(cin, chip);
	cout << "Clock Speed: ";
	cin >> clock;
	return CPU(get<0>(info), get<1>(info), get<2>(info), chip, clock);
}
RAM Inventory::createRAM()
{
	double clock;
	int mem;
	auto info = basicInfo();
	cin.ignore();
	cout << "Clock Speed: ";
	cin >> clock;
	cout << "Memory: ";
	cin >> mem;
	return RAM(get<0>(info), get<1>(info), get<2>(info), clock, mem);
}
MOBO Inventory::createMOBO()
{
	string chip;
	auto info = basicInfo();
	cin.ignore();
	cout << " Chip Set: ";
	getline(cin, chip);
	return MOBO(get<0>(info), get<1>(info), get<2>(info), chip);
}



//Functions to save the parts to a file
void Inventory::saveGPU(GPU& gpu)
{
	ofstream gpuSave(gpuFile, ios::app);
	if (gpuSave.is_open())
	{	
		gpuSave << gpu.getManufacture() << "," << gpu.getModel() << "," << gpu.getPrice()<<"," << gpu.getMemory() <<  "\n";
	}
	else
	{
		cout << "unable to open file";
	}
	gpuSave.flush();
	gpuSave.close();
	system("cls");
}
void Inventory::saveCPU(CPU& cpu)
{
	ofstream cpuSave(cpuFile, ios::app);
	if (cpuSave.is_open())
	{
		cpuSave << cpu.getManufacture() << "," << cpu.getModel() << "," << cpu.getPrice() << "," << cpu.getChipSet()<<","<<cpu.getClockSpeed() << "\n";
	}
	else
	{
		cout << "unable to open file";
	}
	cpuSave.flush();
	cpuSave.close();
	system("cls");
}
void Inventory::saveRAM(RAM& ram)
{
	ofstream RamSave(RamFile, ios::app);
	if (RamSave.is_open())
	{
		RamSave << ram.getManufacture() << "," << ram.getModel() << "," << ram.getPrice() << "," << ram.getClockSpeed() <<","<<ram.getMemory()<< "\n";
	}
	else
	{
		cout << "unable to open file";
	}
	RamSave.flush();
	RamSave.close();
	system("cls");
}
void Inventory::saveMOBO(MOBO& mobo)
{
	ofstream MOBOSave(MoboFile, ios::app);
	if (MOBOSave.is_open())
	{
		MOBOSave << mobo.getManufacture() << "," << mobo.getModel() << "," << mobo.getPrice() << "," << mobo.getChipSet() << "\n";
	}
	else
	{
		cout << "unable to open file";
	}
	MOBOSave.flush();
	MOBOSave.close();
	system("cls");
}





