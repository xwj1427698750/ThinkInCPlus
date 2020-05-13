#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "Usage: 0302 number" << endl;
        return -1;
    }
    int num = atoi(argv[1]);
    vector<int> v;

    for (int i = 2; i < num; i++) {
        int flag = 0;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            v.push_back(i);
        }
    }
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}