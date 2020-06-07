//: C11:ConstReferenceArguments.cpp
// Passing reference as const

void f(int &) {}
void g(const int&) {}

int main() {
    //! f(1); // Error
    g(1);
} ///:~