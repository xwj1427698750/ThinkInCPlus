//: C05:Stack.h
// Nested structs via linked list
// Created by XPL on 2019/11/26.
//
#ifndef STACK_H
#define STACK_H

class Stack {
    struct Link {
        void *data;
        Link *next;
        void initialize(void *data, Link *next);
    } *head;
public:
    void initialize();
    void push(void *data);
    void *peek();
    void *pop();
    void cleanup();
};
#endif // STACK_H ///:~
