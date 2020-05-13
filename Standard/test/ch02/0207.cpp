#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cout << "Usage: 0207 filename" << endl;
        return -1;
    }
    ifstream in(argv[1]);
    string line;
    string tmp;
    
    while (getline(in, line)) {
        cout << line; // for pretty print, do not add endl here
        getline(cin, tmp);
    }

    return 0;
}