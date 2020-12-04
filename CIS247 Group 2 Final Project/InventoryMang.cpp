
#include "Header.h"

using namespace std;

const string gpuFile = "List of GPU's.csv";

tuple <string, string, double> basicInfo;

void Inventory::saveGPU()
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

void Inventory::addBasicParts()
{
	string man, mod;
	double price;
	cout << "Manufacture: ";
	getline(cin, man);
	get<0>(basicInfo) = man;
	cout << "Model: ";
	getline(cin, mod);
	get<1>(basicInfo) = mod;
	cout << "Price: ";
	cin >> price;
	get<3>(basicInfo) = price;
}
void Inventory::addGPU()
{
	int mem;
	cout << "Please enter the following Information" << endl;
	Inventory::addBasicParts();
	cout << "Memory: ";
	cin >> mem;

	GPU gpu1(get<0>(basicInfo), model, mem, price);

}

