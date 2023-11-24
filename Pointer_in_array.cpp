#include<iostream>
using namespace std;

int main(){
    int num [] {1,2,3};
    int * numPointer = num;
    // num[0] == (*(num + 0))
    // num[n] == (*(num + n))
    cout << num << endl;
    cout << &num[0] << endl;
    cout << &num[1] << endl;
    cout << &num[2] << endl;
    cout << &(*(num + 0)) << endl;
    cout << &(*(num + 1)) << endl;
    cout << &(*(num + 2)) << endl;

    numPointer[0] = 10;
    numPointer[1] = 20;
    numPointer[2] = 30;
    cout << "numPointer[0] value : " << numPointer[0] << endl;
    cout << "numPointer[1] value : " << numPointer[1] << endl;
    cout << "numPointer[2] value : " << numPointer[2] << endl;
    cout << "numPointer[0] address : " << &numPointer[0] << endl;
    cout << "numPointer[1] address : " << &numPointer[1] << endl;
    cout << "numPointer[2] address : " << &numPointer[2] << endl;

    *(numPointer + 0) = 4;
    *(numPointer + 1) = 5;
    *(numPointer + 2) = 6;
    cout << "numPointer[0] value : " << *(numPointer + 0) << endl;
    cout << "numPointer[1] value : " << *(numPointer + 1) << endl;
    cout << "numPointer[2] value : " << *(numPointer + 2) << endl;

    return 0;
}