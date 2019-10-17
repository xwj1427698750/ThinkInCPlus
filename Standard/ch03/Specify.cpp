//: C03:Specify.cpp
// Demonstrates the use of specifiers
// Created by XPL on 2019/10/18.
#include <iostream>

using namespace std;

int main() {
    char c;
    unsigned char cu;
    int i;
    unsigned int iu;
    short int is;
    short iis; // Same as short int
    unsigned short int isu;
    unsigned short iisu;
    long int il;
    long iil; // Same as long int
    unsigned long int ilu;
    unsigned long iilu;
    float f;
    double d;
    long double ld;
    cout
        << "\n char = " << sizeof(c)
        << "\n unsigned char = " << sizeof(cu)
        << "\n int = " << sizeof(i)
        << "\n unsigned int = " << sizeof(iu)
        << "\n short = " << sizeof(is)
        << "\n unsigned short = " << sizeof(iis)
        << "\n long int = " << sizeof(il)
        << "\n long = " << sizeof(iil)
        << "\n unsigned long int = " << sizeof(ilu)
        << "\n unsigned long = " << sizeof(iilu)
        << "\n float = " << sizeof(f)
        << "\n double = " << sizeof(d)
        << "\n long double = " << sizeof(ld)
        << endl;
} ///:~
