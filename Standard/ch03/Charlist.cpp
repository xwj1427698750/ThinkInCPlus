//: C03:Charlist.cpp
// Display all the ASCII characters
// Demonstrate "for"
// Created by XPL on 2019/10/17.
#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 128; i++)
        if (i != 26) // ANSI Terminal Clear screen
            cout << " value: " << i
                 << " character: "
                 << char(i) // Type conversion
                 << endl;
} ///:~
