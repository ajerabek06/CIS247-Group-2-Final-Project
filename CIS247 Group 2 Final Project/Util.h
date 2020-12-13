//------------------------------------------------------
//Purpose:  This class will hold Utility methods
//			for things such as input validation
//			and other things as the program is built.
//
//------------------------------------------------------


#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

// This is technically a bunch of integers with names
enum struct Color
{
	GREEN = 2,
	CYAN = 11,
	RED = 12,
	YELLOW = 14,
	WHITE = 15,
	RED_LINE = 206
};

class Util
{
public:
	// Given a list of options, force the user to pick one of the provided options
	static int SelectOption(vector<string> &options);

	// Given a list of options, force the user to pick one of the
	// provided options
	static int SelectOption(vector<string> &options, bool includeExit);

	// Splits a string into parts
	static vector<string> split(string text, char delimeter);

	// Get user input as text (accepts whitespace)
	static string GetText(string prompt);

	// Print text using a specified color
	static void PrintText(string text, Color color);

	// Prompt the user with a message/question
	// Then force their input to be numeric in nature
	template<typename T,
		typename = typename std::enable_if<std::is_arithmetic<T>::value>::type>
	static T GetInput(string prompt)
	{
		PrintText(prompt, Color::YELLOW);
		T value;

		cin >> value;
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return value;
	}

	// Prompt the user with a message/question
	// Then force their input to be a numeric value between min/max
	template<typename T,
		typename = typename std::enable_if<std::is_arithmetic<T>::value>::type>
		static T GetInput(string prompt, T min, T max)
	{
		// Reuse the function above to get a numeric input
		T value = GetInput<T>(prompt);
		
		// Now we can verify that our value is within a particular range
		while (value < min || value > max)
		{
			// Can reuse the function above to print a different message and get user input
			value = GetInput<T>("Expected a value between " + std::to_string(min) + " - " + std::to_string(max) + "\n");
		}

		return value;
	}

};
