#include<iostream>
using namespace std;

int main() {
    int * numPtr = nullptr;
    numPtr = new int[5];

    numPtr[0] = 1;
    numPtr[1] = 2;
    numPtr[2] = 3;

    cout << "numPtr[0] value : " << numPtr[0] << endl;
    cout << "numPtr[1] value : " << numPtr[1] << endl;
    cout << "numPtr[2] value : " << numPtr[2] << endl;
    cout << "numPtr[0] address : " << &numPtr[0] << endl;
    cout << "numPtr[1] address : " << &numPtr[1] << endl;
    cout << "numPtr[2] address : " << &numPtr[2] << endl;

    delete [] numPtr;
    return 0;
}