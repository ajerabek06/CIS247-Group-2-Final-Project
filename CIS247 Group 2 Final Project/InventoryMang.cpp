
#include "Header.h"

using namespace std;

Inventory::Inventory() {
	numItems = 0;
}

void Inventory::addGPU(string man, string mod, double price, int mem)
{
	GPUvect.push_back(GPU(man, mod, price, mem));
}



void Inventory::printGPU()
{
	int userChoice, vectorIndex;
	system("cls");
	cout << fixed << setprecision(2);
	cout << left << setw(NUM_WIDTH) << " " << setw(22) << "Manufacture" << setw(22) << "Model" << setw(22) << "Memory" << setw(15) << "Price" << setw(10) << endl;
	vector<GPU>::iterator iter = GPUvect.begin();
	int i = 1;
	while (iter != GPUvect.end())
	{
		cout << setw(NUM_WIDTH) << i << left << setw(22) << iter->getManufacture() << setw(22) << iter->getModel() << setw(22) << iter->getMemory() << setw(15) << iter->getPrice() << endl;
		iter++; i++;
	}
	cout << "please select an option from the list" << endl;
	cin >> userChoice;
	vectorIndex = userChoice - 1;
	cout << GPUvect.at(vectorIndex) << endl;

	
}
