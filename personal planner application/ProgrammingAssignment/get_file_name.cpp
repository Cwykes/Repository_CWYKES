#include "pch.h"
#include <string>
#include <iostream>
using namespace std;
//file containg the code used in the h file
string get_filename()
{
	string name1;
	cout << "Enter your name: ";
	cin >> name1;

	string pfile;
	pfile = name1 + ".txt";

	return pfile;
}