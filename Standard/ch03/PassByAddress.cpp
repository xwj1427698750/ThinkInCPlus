//: C03:PassByAddress.cpp
// Created by XPL on 2019/10/18.
#include <iostream>

using namespace std;

void f(int *p) {
    cout << "p = " << p << endl;
    cout << "*P = " << *p << endl;
    *p = 5;
    cout << "p = " << p << endl;
}

int main() {
    int x = 47;
    
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
    f(&x);
    cout << "x = " << x << endl;
} ///:~
