//Accesing Elemnts List 
#include<iostream>
#include<list>
using namespace std;
int main(){
    //Create a list 
    list<int> l = {1 ,2 ,3 ,4 ,5};
    //Display the first element 
    cout<<"First Element: "<<l.front()<<endl;
    //Display the last element
    cout<<"Last Element: "<<l.back()<<endl;
    return 0;
}