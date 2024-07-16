#include<iostream>
using namespace std;
int main(){
    int number1 = 15; //Decimal
    int number2 = 017; //Octal
    int number3 = 0x0F; //Hexadecimal
    int number4 = 0b000001111; //Binary

    cout<< "number1: " << number1 << endl;
    cout<< "number2: " << number2 << endl;
    cout<< "number3: " << number3 << endl;
    cout<< "number4: " << number4 << endl;
    return 0;
}