//: C02:Scopy.cpp
// Copy one file to another, a line at a time
// Created by XPL on 2019/10/10.
#include <string>
#include <fstream>

using namespace std;

int main() {
    string dir = "../Standard/ch02/";
    ifstream in(dir + "Scopy.cpp"); // Open for reading
    ofstream out(dir + "Scopy2.cpp"); // Open for writing
    string s;

    while (getline(in, s)) // Discards newline char
        out << s << "\n"; // ... must add it back
} ///:~
