//: C07:Mem.h
// Created by XPL on 2019/12/5.

#ifndef MEM_H
#define MEM_H
typedef unsigned char byte;

class Mem {
    byte *mem;
    int size;
    void ensureMinSize(int minSize);
public:
    Mem();
    Mem(int sz);
    ~Mem();
    int msize();
    byte *pointer();
    byte *pointer(int minSize);
};

#endif //THINKINGINCPLUS_MEM_H
///:~