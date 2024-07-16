#include<iostream>
using namespace std;
int add(int num1 , int num2){
     int sum = num1+num2;
    cout<<"Sum of num1 and num2: "<< sum <<"\n";
}
int add(int num1 , int num2 , int num3){
     int sum_of_three = num1+num2+num3;
     cout<<"Sum of num1 , num2 , and num3: "<< sum_of_three <<"\n";
}
int main(){
    add(3,6);
    add(5,7,9);
    return 0;
}