//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
// Created by XPL on 2019/10/17.
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    ifstream in("../Standard/ch02/Fillvector.cpp");
    string line;

    while (getline(in, line)) {
        v.push_back(line); // Add the line to the end
    }

    // Add line numbers:
    for (int i = 0; i < v.size(); i++)
        cout << i << ": " << v[i] << endl;
} ///:~
