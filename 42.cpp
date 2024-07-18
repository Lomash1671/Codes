#include<iostream>
#include<list>
using namespace std;
int main(){
    int i =10;
    // cout<<i<<endl;
    // cout<<&i<<endl;
    // cout<< *(&i)<<endl;
    int *j = &i;
    // j = &(i+34);
    cout<<*j<<endl;
}