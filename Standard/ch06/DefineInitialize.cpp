//: C06:DefineIntialize.cpp
// Defining variable anywhere
// Created by XPL on 2019/11/27.
#include "../require.h"
#include <iostream>
#include <string.h>
using namespace std;

class G {
    int i;
public:
    G(int ii);
};

G::G(int ii) {
    i = ii;
}

int main() {
    cout << "initialization value? ";
    int retval = 0;
    cin >> retval;
    require(retval != 0);
    int y = retval + 3;
    G g(y);
} ///:~