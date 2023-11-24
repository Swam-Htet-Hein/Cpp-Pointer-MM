#include<iostream>
using namespace std;

int main() {
    int age = 21;
    int * agePointer = &age;
    int ** agePtoP = &agePointer;
    int *** ageTripleP = &agePtoP;
    
    cout << "ageTripleP : " << ageTripleP << endl;
    cout << "*ageTripleP : " << *ageTripleP << endl;
    cout << "**ageTripleP : " << **ageTripleP << endl;
    cout << "***ageTripleP : " << ***ageTripleP << endl;

    /* Result
        ageTripleP : 0x1c677ffcf0
        *ageTripleP : 0x1c677ffcf8
        **ageTripleP : 0x1c677ffd04
        ***ageTripleP : 21
    */

    /* Table
        Address     | Variable Name | Value
        0x1c677ffd04|   age         | 21            (***)
        0x1c677ffcf8|   agePointer  | 0x1c677ffd04  (**)
        0x1c677ffcf0|   agePtoP     | 0x1c677ffcf8  (*)
            ---     |   ageTripleP  | 0x1c677ffcf0
    */

    return 0;
}