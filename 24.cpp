#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Welcome to MIET";
    str.replace(3, 4 , "abcd");
    cout << str << endl;
    return 0;
}