#include<iostream>
using namespace std;

int main(){
    // Single dimensional array
    int array[] {1,2,3};
    // 2 dimensional array
    int _2Darray[2][4] {{1,2,3,4},{5,6,7,8}}; 

    for (int j=0; j<2; j++) {
        for (int i=0; i<4; i++) {
            cout << _2Darray[j][i] << ", ";
        }
        cout << endl;
    }
    // 3 dimensional array
    int _3Darray[2][3][2] {
        {{1,2},{3,4},{5,6}},
        {{7,8},{9,10},{11,12}}
    };

    for (int k=0; k<2; k++) {
        for (int j=0; j<3; j++) {
            for (int i=0; i<2; i++) {
                cout << _3Darray[k][j][i] << ", ";
            }
            cout << '\xdb';
        }
        cout << endl;
    }

    return 0;
}