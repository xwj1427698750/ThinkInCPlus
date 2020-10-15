//: C03:PointerIncrement2.cpp
#include <iostream>
using namespace std;

typedef struct
{
	char c;
	short s;
	int i;
	long l;
	float f;
	double d;
	long double ld;
} Primitive;

int main()
{
	Primitive p[10];
	Primitive *pp = p;
	cout << "sizeof(Primitive) = "
		<< sizeof(Primitive) << endl;
	cout << "pp = " << (long)pp << endl;
	pp++;
	cout << "pp = " << (long)pp << endl;
} ///:~
