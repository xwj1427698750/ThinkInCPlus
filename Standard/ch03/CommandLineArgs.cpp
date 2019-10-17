//: C03:CommandLineArgs.cpp
// Created by XPL on 2019/10/18.
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    cout << "argc = " << argc << endl;
    for (int i = 0; i < argc; i++) 
        cout << "argv[" << i << "] = "
             << argv[i] << endl;
} ///:~
