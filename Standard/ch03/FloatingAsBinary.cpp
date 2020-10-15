//: C03:FloatingAsBinary.cpp
// {L} PrintBinary
// {T} 3.14159
#include "PrintBinary.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		cout << "Must provide a number" << endl;
		exit(1);
	}
	double d = atof(argv[1]);
	unsigned char *cp = 
		reinterpret_cast<unsigned char *>(&d);
	for (int i = sizeof(double); i > 0; i -= 2)
	{
		PrintBinary(cp[i - 1]);
		PrintBinary(cp[i]);
	}
} ///:~
