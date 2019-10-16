//: C15:PureVirtualDefinitions
// Pure Virtual base definitions
// Created by XPL on 2019/10/10.
#include <iostream>
using namespace std;

class Pet {
public:
    virtual void speak() const = 0;
    virtual void eat() const = 0;
    // Inline pure virtual definitions illegal:
    //! virtual void sleep() const = 0 {}
};

// OK, not defined inline
void Pet::speak() const {
    cout << "Pet::speak()" << endl;
}

void Pet::eat() const {
    cout << "Pet::eat()" << endl;
}

class Dog : public Pet {
public:
    void speak() const {
        Pet::speak();
    }
    void eat() const {
        Pet::eat();
    }
};

int main() {
   Dog simba; // Richard's dog
   simba.speak();
   simba.eat();
} ///:~
