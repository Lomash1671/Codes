#include<iostream>
using namespace std;
int add(int num1,int num2){
cout << "Sum is: " << num1 + num2 << endl;
return 0;
}
int sub(int num1,int num2){
cout << "Sub is: " << num1 - num2 << endl;
return 0;
}
int mul(int num1,int num2){
cout << "Mul is: " << num1 * num2 << endl;
return 0;
}
int divi(int num1,int num2){
cout << "Remainder is: " << num1/num2 << endl;
return 0;
}

int main(){
    add(8,9);
   return 0;
    sub(8,9);
   return 0;
    mul(8,9);
   return 0;
    divi(8,9);
   return 0;
}