//: C05:UseHandle.cpp
// {L} Handle
// Use the Handle class
// Created by XPL on 2019/11/27.
#include "Handle.h"

int main() {
    Handle u;
    u.initialize();
    u.read();
    u.change(1);
    u.cleanup();
} ///:~

