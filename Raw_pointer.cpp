#include <iostream>
using namespace std;

int main(){
    int age = 21;
    // pointer တစ်ခုကို ဒီအတိုင်း ; နဲ့ မထားခဲ့ ပါနဲ့။
    // ဘာမှမရှိကြောင်း ပြတဲ့ အနေနဲ့ nullptr ဆိုပြီးရေးခဲ့ပါ။
    int *agePointer = nullptr; // Create Pointer (pointer only store address)
    agePointer = &age;
    
    cout << "age address : " << &age << endl;
    cout << "agePointer address : " << agePointer << endl;

    cout << "age value : " << age << endl;
    cout << "agePointer value : " << *agePointer << endl;

    return 0;
}