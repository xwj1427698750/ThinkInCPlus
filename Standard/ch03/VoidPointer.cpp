//: C03:VoidPointer.cpp
// Created by XPL on 2019/10/18.

int main() {
    void *vp;
    char c;
    int i;
    float f;
    double d;
    // The address of ANY type can be
    // assigned to a void pointer:
    vp = &c;
    vp = &i;
    vp = &f;
    vp = &d;
} ///:~
