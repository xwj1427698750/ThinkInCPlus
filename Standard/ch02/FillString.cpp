//: C02:FillString.cpp
// Read an entire file into a single string
// Created by XPL on 2019/10/16.
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
   ifstream in("../Standard/ch02/FillString.cpp");
   string s, line;

   while (getline(in, line))
       s += line + "\n";
   cout << s;
} ///:~
