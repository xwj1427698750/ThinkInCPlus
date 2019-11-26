//: C06:Stack3Test.cpp
// {L} Stack3.cpp
// {T} Stack3Test.cpp
// Constructors/destructors
// Created by XPL on 2019/11/27.
#include "Stack3.h"
#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    requireArgs(argc, 1); // File name is argument
    ifstream in(argv[1]);
    assure(in, argv[1]);
    Stack textlines;
    string line;
    // Read file and store line in the stack:
    while (getline(in, line)) 
        textlines.push(new string(line));
    // Pop the lines from the stack and print them:
    string *s;
    while ((s = (string*)textlines.pop()) != 0) {
        cout << *s << endl;
        delete s;
    }
}
///:~