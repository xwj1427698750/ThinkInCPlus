//: C03:Guess.cpp
// Guess a number (demonstrates "while")
// Created by XPL on 2019/10/17.
#include <iostream>

using namespace std;

int main() {
    int secret = 15;
    int guess = 0;
    // "!=" is the "not-equal" conditional:
    while (guess != secret) { // Compound statement
        cout << "guess the number: ";
        cin >> guess;
    }
    cout << "You guessed it!" << endl;
} ///:~
