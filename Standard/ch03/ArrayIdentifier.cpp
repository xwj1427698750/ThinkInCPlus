//: C03:ArrayIdentifier.cpp
#include <iostream>
using namespace std;

int main()
{
	int a[10];
	cout << "a = " << a << endl;
	cout << "&a[0] = 0x" << hex << reinterpret_cast<long>(&a[0]) << endl;
} ///:~
