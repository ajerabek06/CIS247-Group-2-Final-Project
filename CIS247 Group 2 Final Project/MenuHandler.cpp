/*
	Purpose:  This class will hold Menu methods
			  for differnt menues used in the program

			 
*/

#include "Header.h"
#include <string>
#include <map>
#include <vector>
#include <typeinfo>
#include "Menu.h"
using namespace std;

Util* utilPtr;
MenuHandler* MenuHandler::instance = nullptr;
Menu* MenuHandler::ActiveMenu = nullptr;

