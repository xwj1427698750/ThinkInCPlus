#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("./Standard/test/0203.cpp");
    string word;
    int count = 0;

    while (in >> word)
        count++;
    cout << "count: " << count << endl;
    return 0;
}