#include<iostream>
using namespace std;

int main() {
    bool * pointer = new bool;

    cout << pointer + 0 << endl;
    cout << pointer + 1 << endl;
    cout << pointer + 2 << endl;
    cout << pointer + 3 << endl;
    
    delete pointer;
    return 0;
}