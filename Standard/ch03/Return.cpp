//: C03:Return.cpp
// Use of "return"
// Created by XPL on 2019/10/17.
#include <iostream>

using namespace std;

char cfunc(int i) {
    if (i == 0)
        return 'a';
    if (i == 1)
        return 'g';
    if (i == 5)
        return 'z';
    return 'c';
}

int main() {
    cout << "type an integer: ";
    int val;
    cin >> val;
    cout << cfunc(val) << endl;
} ///:~
