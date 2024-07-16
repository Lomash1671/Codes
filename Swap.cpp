#include<iostream>
using namespace std;
int main(){
    int c;
    int a = 10;
    int b = 20;
    c = a;
    a = b;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}