//: C11:FreeStandingReferences.cpp
// Created by XPL on 2019/11/2.

#include <iostream>
using namespace std;

// Ordinary free-standing reference
int y;
int& r = y;
// When a reference i created, it must
// be initialized to a live object.
// However, you can also say:
const int& q = 12;  // (1)
// References are tied to someone  else's storage:
int x = 0;          // (2)
int& a = x;         // (3)

int main() {
    cout << "x = " << x << ", a = " << a << endl;
    a++;
    cout << "x = " << x << ", a = " << a << endl;
    return 0;
} ///:~
