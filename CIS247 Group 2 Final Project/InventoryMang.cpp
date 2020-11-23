
#include "Header.h"

using namespace std;

const string gpuFile = "List of GPU's.csv";

void Inventory::addGPU()
{
	string man, mod;
	int mem;
	double price;
	ofstream gpuSave(gpuFile, ios::app);
	char yesNo;
	if (gpuSave.is_open())
	{
		do
		{
			cout << "Manufacture: ";
			getline(cin, man);
			cout << "Model: ";
			getline(cin, mod);
			cout << "Memory: ";
			cin>> mem;
			cout << "Price: ";
			cin >> price;
			GPU gpu1(man, mod, price, mem);
			gpuSave << man << "," << mod << "," << mem<< "," << price<< "\n";
			cout << "Enter another GPU (Y/N)? ";
			cin >> yesNo;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			yesNo = toupper(yesNo);
		} while (yesNo == 'Y');
	}
	else
	{
		cout << "unable to open file";
	}
	gpuSave.flush();
	gpuSave.close();
	system("cls");
	return;
}



void Inventory::writeGPUToFile()
{
	
}