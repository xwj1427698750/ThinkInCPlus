//: C06:Stack3.cpp {O}
// Constructors & destructors
// Created by XPL on 2019/11/27.
#include "Stack3.h"
#include "../require.h"
using namespace std;

Stack::Link::Link(void *data, Stack::Link *next) {
    this->data = data;
    this->next = next;
}

Stack::Link::~Link() {}
Stack::Stack() {
    head = 0;
}

void Stack::push(void *data) {
    head = new Link(data, head);
}

void *Stack::peek() {
    require(head != 0, "Stack empty");
    return head->data;
}

void *Stack::pop() {
    if (head == 0) return 0;
    void *result = head->data;
    Link* oldHead = head;
    head = head->next;
    delete oldHead;
    return result;
}

Stack::~Stack() {
    require(head == 0, "Stack not empty");
}

///:~