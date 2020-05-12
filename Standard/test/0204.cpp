#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: 0204 filename key" << endl;
        return -1;
    }
    
    string filename = argv[1];
    string key = argv[2];
    ifstream in(filename);
    string word;
    int keycnt = 0;

    while (in >> word) {
        if (word == key) {
           keycnt++; 
        }
    }
    cout << "In file '" << filename << "' has key '" 
        << key << "' count: " << keycnt << endl;
    return 0;
}