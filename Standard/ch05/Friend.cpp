//: C05:Friend.cpp
// Friend allows special access
// Created by XPL on 2019/11/7.

// Declaration (incomplete type specification):
struct X;

struct Y {
    void f(X*);//这里不可以改为void f(X c);
};

struct X { // Definition
private:
    int i;
public:
    void initialize();
    friend void g(X*, int); // Global friend
    friend void Y::f(X *);  // Struct member friend
    friend struct Z; // Entire struct is a friend
    friend void h();
};

void X::initialize() {
    i = 0;
}

void g(X *x, int i) {
    x->i = i;
}

void Y::f(X *x) {
    x->i = 47;
}

struct Z {
private:
    int j;
public:
    void initialize();
    void g(X *x);
};

void Z::initialize() {
    j = 99;
}

void Z::g(X *x) {
    x->i += j; 
}

void h() {
    X x;
    x.i = 100; // Direct data manipulation
}

int main() {
    X x;
    Z z;
    z.g(&x);
} ///:~
