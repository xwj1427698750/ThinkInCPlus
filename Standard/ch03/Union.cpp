//: C03:Union.cpp
// The size of simple use of a union
#include <iostream>
using namespace std;

union Packed
{
    char i;
    short j;
    int k;
    long l;
    float f;
    double d;
    // The union will be the size of
    // Double, since that's the largest element
}; // Semicolon ends a union, like a struct

int main()
{
    cout << "sizeof(Packed) = "
        << sizeof(Packed) << endl;
    Packed x;
    x.i = 'c';
    cout << x.i << endl;
    x.d = 3.14159;
    cout << x.d << endl;
}
