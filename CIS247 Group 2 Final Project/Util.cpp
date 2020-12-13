#include "Util.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <windows.h>
using namespace std;

int Util::SelectOption(vector<string> &options)
{
	string divider(20, '-');

	cout << divider << endl;
	
	// Print each option in a nicely formatted way
	for (int i = 0; i < options.size(); i++)
		cout << "[" << i << "] " << options[i] << endl;

	cout << divider << endl;

	return Util::GetInput<int>("Please select an option", 0, options.size());
}

int Util::SelectOption(vector<string> &options, bool includeExit)
{
	vector<string> temp(options);

	if (includeExit)
		temp.push_back("Exit");

	string divider(20, '-');

	cout << divider << endl;

	// Print each option in a nicely formatted way
	for (int i = 0; i < temp.size(); i++)
		cout << "[" << i << "] " << temp[i] << endl;

	cout << divider << endl;

	return Util::GetInput<int>("Please select an option", 0, temp.size());
}

vector<string> Util::split(string text, char delimeter)
{
	vector<string> results;
	string item;
	stringstream ss(text);

	while (getline(ss, item, delimeter))
		results.push_back(item);

	return results;
}

string Util::GetText(string prompt)
{
	PrintText(prompt, Color::YELLOW);
	string text;
	
	getline(cin, text);
	return text;
}

void Util::PrintText(string text, Color color)
{
	// What is the reference to the current window (console window)
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	// This sets all text that will be printed starting now to the color
	// specified.
	SetConsoleTextAttribute(console, (int)color);

	// now this stuff gets printed as whatever color
	cout << text << endl;

	// Cannot forget to set the color back to white
	SetConsoleTextAttribute(console, (int)Color::WHITE);
}
