#include <iostream>

using namespace std;

class CBase1 {
public:
    virtual void f() {}
    int data1;
};

class CBase2 {
public:
    virtual void g() {}
    int data2;
};

class CDrive : public CBase1, public CBase2 {
public:
    virtual void h() {}
    int data3;
};

int main()
{
    CBase1 *ptr1 = new CBase1();
    CBase1 *ptr2 = new CDrive();
    CBase2 *ptr3 = new CBase2();
    CBase2 *ptr4 = new CDrive();

    ptr1->f();
    ptr2->f();
    ptr3->g();
    ptr4->g();

    return 0;
}
