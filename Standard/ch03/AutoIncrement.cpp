//: C03:AutoIncrement.cpp
// Show use of auto-increment
// and auto-decrement operator
// Created by XPL on 2019/10/17.
#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int j = 0;

    cout << ++i << endl; // Pre-increment
    cout << j++ << endl; // Post-increment
    cout << --i << endl; // Pre-decrement
    cout << j-- << endl; // Post-decrement
} ///:~
