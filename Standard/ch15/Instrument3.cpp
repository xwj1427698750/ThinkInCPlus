//: C15:Instrument3.cpp
// Late binding with the virtual keyword
// Created by XPL on 2019/10/10.
#include <iostream>

using namespace std;
enum note {
    middleC, Csharp, Cflag
}; // Etc.

class Instrument {
public:
    virtual void play(note) const {
        cout << "Instrument::play" << endl;
    }
};

// Wind objects are Instruments
// because they have the same interfaces:
class Wind : public Instrument {
public:
    // Override interface function:
    void play(note) const {
        cout << "Wind::play" << endl;
    }
};

void tune(Instrument &i) {
    // ...
    i.play(middleC);
}

int main() {
    Wind flute;

    tune(flute);
} ///:~
