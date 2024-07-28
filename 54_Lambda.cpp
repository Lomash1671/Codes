//Mutable Keyword demo
//this keyword modifies the local copy of x, not the original x
#include<iostream>
using namespace std;
int main(){
    int x = 10;
    auto modifyX = [x]() mutable{
    x = 20;
    cout << "Inside lambda, x = " << x << endl;
    };
    modifyX();
    cout << "Outside lambda, x = " << x << endl; //output = Outside lambda , x = 10
    return 0;
   
}
