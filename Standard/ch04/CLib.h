//: C04:CLib.h
// Header file for a C-like library
// An array-like entity create at runtime
// Created by XPL on 2019/10/18.

#ifndef THINKINGINCPLUS_CLIB_H
#define THINKINGINCPLUS_CLIB_H

typedef struct CStashTag {
    int size;       // Size of each space
    int quantity;   // Number of storage spaces
    int next;       // Next empty space
    // Dynamically allocated array of bytes:
    unsigned char* storage;
} CStash;

void initialize(CStash *s, int size);
void cleanup(CStash *s);
int add(CStash *s, const void *element);
void *fetch(CStash *s, int index);
int count(CStash *s);
void inflate(CStash *s, int increase);

#endif //THINKINGINCPLUS_CLIB_H
