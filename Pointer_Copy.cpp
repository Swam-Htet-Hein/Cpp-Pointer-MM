#include<iostream>
using namespace std;

int main() {
    int num = 10;
    int *numPointer = &num;
    int numCopy = num;
    num = 7;

    cout << "num : " << num << endl;
    cout << "numPointer : " << *numPointer << endl;
    cout << "numCopy : " << numCopy << endl;

    return 0;
}