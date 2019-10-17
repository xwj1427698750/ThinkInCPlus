//: C03:PassReference.cpp
// Created by XPL on 2019/10/18.
#include <iostream>

using namespace std;

void f(int &r) {
    cout << "r = " << r << endl;
    cout << "&r = " << &r << endl;
    r = 5;
    cout << "r = " << r << endl;
}

int main() {
    int x = 47;

    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    f(x); // Looks like pass-by-value is actually pass by address
    cout << "x = " << x << endl;
} ///:~
