#include<iostream>
using namespace std;

int main() {
    int age = 21;
    int * agePointer = &age;
    int ** agePtoP = &agePointer; // pointer သည် value ကိုသိမ်းတာမဟုတ်ဘူး address ကိုဘဲသိမ်းတာဖြစ်တဲ့ အတွက် reference(&) ကိုသုံးပြီး pointer variable ကို address ဖြစ်အောင်ပြောင်းပါ။
    // Double pointer ဟုလည်းခေါ်တယ်။ 
    cout << "value of age : " << age << endl;
    cout << "address of age : " << &age << endl;

    cout << "value of agePointer : " << agePointer << endl;
    cout << "address of agePointer : " << &agePointer << endl;

    cout << "value of agePointerToPointer : " << agePtoP << endl;
    cout << "address of agePointerToPointer : " << &agePtoP << endl;

    return 0;
}