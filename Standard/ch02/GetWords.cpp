//: C02:GetWords.cpp
// Break a file into whitespace-separated words
// Created by XPL on 2019/10/17.
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    ifstream in("../Standard/ch02/GetWords.cpp");
    string word;

    while (in >> word)  /* ">>/<<" use whitespace as separator */
        words.push_back(word);
    for (int i = 0; i < words.size(); i++)
        cout << words[i] << endl;
} ///:~
