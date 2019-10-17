//: C03:ArgsToInts.cpp
// Converting command-line arguments to ints
// Created by XPL on 2019/10/18.
#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) 
        cout << atoi(argv[i]) << endl;
}
