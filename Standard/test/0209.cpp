#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<float> v1;
    vector<float> v2;
    vector<float> v3;
    float f;

    for (int i = 0; i < 25; i++) {
        v1.push_back(i * 1.3);    
        v2.push_back(i * 2.1);
    }
    for (size_t i = 0; i < v1.size(); i++) {
        f = v1[i] + v2[i];
        v3.push_back(f);
    }

    for (int i = 0; i < 25; i++) {
        cout << setfill('0') << setw(2) << i << ": " << v3[i] << endl;
    }

    return 0;
}