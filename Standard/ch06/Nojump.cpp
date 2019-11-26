//: C06:Nojump.cpp
// Can't jump past constructors
// Created by XPL on 2019/11/27.

class X {
public:
    X();
};

X::X() {}

void f(int i) {
    if (i < 10) {
        //! goto jump1; // Error: goto bypasses init
    }
    X x1; // Constructor called here
    jump1:
    switch (i) {
        case 1:
            X x2; // Constructor called here
            break;
        //! case 2: // Error: case bypassed init
            X x3; // Constructor called here
            break;
    }
}

int main() {
    f(9);
    f(11);
} ///:~