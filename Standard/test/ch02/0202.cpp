#include <iostream>
using namespace std;

int main(int argc, char *arg[]) {
    int radius;

    cin >> radius;

    cout << "radius " << radius << ", area is " 
        << (radius * radius * 3.14) << endl;
    return 0;
}