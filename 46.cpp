#include<iostream>
#include<string>
using namespace std;
class person{
    char name[20]; //data member
    int id;
    public:
        void getdetail(){
            cout<<"details is as follows: ";
        }
}; 
int main(){
    person p1; //creating object
    p1.getdetail();
}