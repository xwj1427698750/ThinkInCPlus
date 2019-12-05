//: C07:Mem2.h
// Created by XPL on 2019/12/6.

#ifndef MEM2_H
#define MEM2_H

class Mem {
    byte *mem;
    int size;
    void ensureMinSize(int minSize);
public:
    Mem(int sz = 0):
    ~Mem();
    int msize();
    byte *pointer(int minSize = 0);
};

#endif // MEM2_H
///:~