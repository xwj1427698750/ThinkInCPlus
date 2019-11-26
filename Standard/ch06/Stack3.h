//: C06:Stack3.h
// With constructors/destructor
// Created by XPL on 2019/11/27.
#ifndef STACK3_H
#define STACK3_H

class Stack {
    struct Link {
        void *data;
        Link *next;
        Link(void *data, Link *next);
        ~Link();
    } *head;
public:
    Stack();
    ~Stack();
    void push(void *data);
    void *peek();
    void *pop();
};
#endif // STACK3_H
///:~