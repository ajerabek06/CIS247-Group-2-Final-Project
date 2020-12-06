#include "Util.h"


bool checkValidInput(int min, int max, int choice)
{
	if ((choice > max) || (choice < min))
	{
		cout << "Invalid choice\n";
		system("PAUSE");
		return false;
	}
	else
	{
		return true;
	}
	
}

bool enterAnotherOrReturn()
{
	char yesNo;
	cout << "Would you like to enter another item? (Y/N)";
	cin >> yesNo;
	cin.ignore();
	yesNo = toupper(yesNo);
	if ((yesNo == 'Y') || (yesNo == 'y'))
	{
		return true;
	}
	else
	{
		return false;
	}
		
}