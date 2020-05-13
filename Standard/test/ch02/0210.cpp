#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<float> v;

    for (int i = 0; i < 25; i++) {
        v.push_back(i * 1.3);    
    }

    for (size_t i = 0; i < v.size(); i++) {
        v[i] = v[i] * v[i];
    }

    for (int i = 0; i < 25; i++) {
        cout << setfill('0') << setw(2) << i << ": " << v[i] << endl;
    }

    return 0;
}