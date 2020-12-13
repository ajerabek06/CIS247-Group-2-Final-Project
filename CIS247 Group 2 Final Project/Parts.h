/*------------------------------------------------------
Purpose:  This class will hold Parts 
			for things such as CPU, GPU, RAM, Motherboards

			Done
*/

#pragma once

#include "Header.h"
#include<ostream>
#include <fstream>
#include "Util.h"
#include <vector>
using namespace std;

// Parent class to all parts
class Parts 
{
protected:
	string manufacture, model;
	double price;

public:
	//Constructor
	Parts();
	Parts(string, string, double);

	// Make it easier to display to console
	virtual string toString();

	// Make it easier to output this object into a CSV format
	virtual string toCSV();

	string getManufacture();
	string getModel();
	double getPrice();

	void setManufacture(string);
	void setModel(string);
	void setPrice(double);	

	virtual void consumeData(vector<string> data);

	// Implementing this allows you to do
	// Where item represents an instance of Parts
	friend ostream& operator <<(ostream& out, Parts& item)
	{
		out << item.toString() << endl;
		return out;
	}

	// This allows you to directly output a Parts instance
	// to a file (as csv)
	friend ofstream& operator <<(ofstream& file, Parts& item)
	{
		file << item.toCSV() << endl;
		return file;
	}

	// Consume a vector of strings
	friend vector<string>& operator>>(vector<string> data, Parts& item)
	{
		item.consumeData(data);
		return data;
	}


	// Consume a string (CSV formatted)
	friend string& operator>>(string& line, Parts& item)
	{
		vector<string> data = Util::split(line, ',');
		data >> item;

		return line;
	}

	// Read a file. Each record line should be in CSV format which represents an instance of T
	// Each line(record) will populate an instance of T and be added to a collection that'll be returned
	template<typename T,
		typename = typename std::enable_if<std::is_assignable<Parts,T>::value>::type>
	static vector<T> GetFileContents(string filename)
	{
		vector<T> contents;
		ifstream input(filename);

		if (!input.is_open())
		{
			Util::PrintText("Unable to open " + filename, Color::RED_LINE);
			return contents;
		}

		string current_line;
		while (getline(input, current_line, '\n'))
		{
			T instance;

			// Pass in our CSV line into our instance
			current_line >> instance;

			contents.push_back(instance);
		}

		input.close();
		return contents;
	}

	// Save an individual instance of T to a specified filename
	template<typename T,
		typename = typename std::enable_if<std::is_assignable<Parts, T>::value>::type>
	static void SaveToFile(string filename, T item, bool append=true)
	{

		/*
			If you want to ADD / continue with the current file -- we use ios::app
			If we do not wish to append (overwrite) we shall use ios::trunc
		*/
		ofstream file(filename, append ? ios::app : ios::trunc);

		if (!file.is_open())
		{
			cout << "Unable to open save file " << filename << endl;
			return;
		}

		file << item;
		file.flush();
		file.close();
	}

	// Save a collection of T to a specified file
	template<typename T,
		typename = typename std::enable_if<std::is_assignable<Parts, T>::value>::type>
		static void SaveToFile(string filename, vector<T> items, bool append = true)
	{
		if (append)
		{
			ofstream file(filename, ios::app);

			if (file.is_open())
			{
				for (T part : items)
					file << part;

				file.flush();
				file.close();
			}
		}
		else 
		{
			ofstream file(filename, ios::trunc);
			
			if (file.is_open())
			{
				for (T part : items)
					file << part;

				file.flush();
				file.close();
			}
		}
	}
}; 

class GPU: public Parts
{
private:
	int memory;
	
public:
	//Constructor
	GPU(string, string, double,int);
	GPU() {}
	string toString();
	string toCSV();

	//Accessors
	int getMemory();
	void setMemory(int);	

	void consumeData(vector<string> data);
};
class CPU: public Parts
{
private:
	string chipSet;
	double clockSpeed;
public:
	CPU(string, string, double,string, double);
	CPU() {}
	string toString();
	string toCSV();

	//Accessors
	string getChipSet();
	double getClockSpeed();
	
	void setChipSet(string);
	void setClockSpeed(double);

	void consumeData(vector<string> data);
	
};
class RAM: public Parts
{
private:	
	int memory;
	double clockSpeed;
public:
	RAM(string, string, double, double, int);
	RAM() {}
	string toString();
	string toCSV();

	//Accessors
	double getClockSpeed();
	int getMemory();
	void setClockSpeed(double);
	void setMemory(int);

	void consumeData(vector<string> data);
};
class MOBO: public Parts
{
private:
	string chipSet;
	
public:
	MOBO(string, string, double, string);
	MOBO() {}
	string toString();
	string toCSV();

	//Accessors
	string getChipSet();
	void setChipSet(string);

	void consumeData(vector<string> data);
};




