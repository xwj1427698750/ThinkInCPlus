//: C02:Intvector.cpp
// Create a vector that holds integers
// Created by XPL on 2019/10/17.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    for (size_t i = 0; i < 10; i++)
        v.push_back(i);
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i] << ", ";
    cout << endl;
    for (size_t i = 0; i < v.size(); i++)
        v[i] = v[i] * 10; // Assignment
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i] << ", ";
    cout << endl;
} ///:~
