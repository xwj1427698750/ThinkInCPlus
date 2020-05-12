#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    ifstream in("./Standard/ch02/Fillvector.cpp");
    string line;
    string lines;

    while (getline(in, line)) {
        v.push_back(line); // Add the line to the end
    }

    // Add line numbers:
    for (size_t i = 0; i < v.size(); i++) {
        lines += v[i];
    }
    cout << lines << endl;
} ///:~
