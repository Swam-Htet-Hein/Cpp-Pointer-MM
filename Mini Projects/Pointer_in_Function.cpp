#include<iostream>
using namespace std;

void test (int *x, int *y, int *z) {
    cout << "x address : " << x << endl;
    *x = 5;
    cout << "y address : " << y << endl;
    *y = 3;
    cout << "z address : " << z << endl;
    *z = 10;
}

int main(){
    int x, y, z;

    test(&x, &y, &z);
    
    cout << "x : " << x << endl;
    cout << "y : " << y << endl;
    cout << "z : " << z << endl;
    return 0;
}