#include<iostream>
using namespace std;
class Example{
    mutable int value;
    public:
    Example(int value):value(value){}
    void modify()const {value++; cout<<"Value: "<<value<<endl;}
};
int main(){
    Example e(10);
    e.modify();
    return 0;
}