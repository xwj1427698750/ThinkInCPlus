//: C03:CatsInHats.cpp
// Simple demonstration of recursion
// Created by XPL on 2019/10/17.
#include <iostream>

using namespace std;

void removeHat(char cat) {
    for (char c = 'A'; c < cat; c++)
        cout << " ";
    if (cat <= 'Z') {
        cout << "cat " << cat << endl;
        removeHat(cat + 1);
    } else {
        cout << "VOOM!!!" << endl;
    }
}

int main() {
    removeHat('A');
} ///:~
