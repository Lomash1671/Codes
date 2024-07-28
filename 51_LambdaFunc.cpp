//Lambda expression- way to define anonymous fun objects, allows you to write inline, unnamed fun within code
//Lambda syntax - [capture](parameter)->return_type{//function body};
#include<iostream>
using namespace std;
int main(){
    auto add = [](int a, int b){
        return a+b;
    };
    cout << "Sum: " << add(3,4) << endl; //output sum = 7
    return 0;
}
