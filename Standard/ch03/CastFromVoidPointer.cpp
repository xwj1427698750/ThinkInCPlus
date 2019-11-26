//: C03:CastFromVoidPointer.cpp
// Created by XPL on 2019/11/6.

int main() {
    int i = 99;
    void *vp = &i;
    // Can't dereference a void pointer:
    // *vp = 3; // Compile-time error
    // Must cast back to int before dereferencing:
    *((int*)vp) = 3;
} ///:~

