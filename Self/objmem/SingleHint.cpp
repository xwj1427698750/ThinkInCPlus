// use gdb to view object memory
#include <iostream>

using namespace std;

class Base {
public:
    virtual void f()
    {
        cout << "Base::f()" << endl;
    }
    int data2;
private:
    int data1;
};

class Drive : public Base {
public:
    virtual void g()
    {
        cout << "Drive::g()" << endl;
    }
private:
    int data3;
};

//   Drive {
//    Base {
// 0    vtptr { Base::f(), Drive::g() }
// 8  data2;
// 16  data1;
//    };
// 24  data3;
//   };

int main()
{
    Base *ptr1 = new Base();
    Base *ptr2 = new Drive();
    Drive *ptr3 = (Drive *)ptr2;

    ptr1->f();
    ptr2->f();

    cout << "sizeof(Base): " << sizeof(*ptr1) << endl; // 16
    cout << "sizeof(Base): " << sizeof(*ptr2) << endl; // 16
    cout << "sizeof(Drive): " << sizeof(*ptr3) << endl; // 24
    return 0;
}
