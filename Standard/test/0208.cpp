#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<float> v;

    for (int i = 0; i < 25; i++) {
        v.push_back(i * 1.3);    
    }

    for (int i = 0; i < 25; i++) {
        cout << setfill('0') << setw(2) << i << ": " << v[i] << endl;
    }

    return 0;
}