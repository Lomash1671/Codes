#include<iostream>
using namespace std;
void example(){
    static int count = 0;
    count++;
    cout<<"Count: "<<count << endl;
}
int main(){
    example();
}