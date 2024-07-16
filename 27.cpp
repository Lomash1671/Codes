#include<iostream>
#include<array>
using namespace std;
int main(){
    //normal array
    //int a[] = {};
    //STL standard template library 
    array<int,4> a = {3, 4, 2, 7};
    int size = a.size();
    cout << size << endl;
    for(int i = 0; i<size; i++){
        cout << a[i] << endl;
    }
    cout<< "Element at Index="<<a.at(3)<<endl;
    bool truefalse = a.empty();
    cout << true or false << truefalse;
    bool empty = a.empty();
    cout<< "is array is empty or not = "<<empty;
    cout << "firstelement = "<<a.front()<<endl;
    cout << "lastelement = "<<a.back()<<endl;

}