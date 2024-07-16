#include<iostream>
using namespace std;
int main(){
    bool red_light{false};
    bool green_light{true};
    if(red_light == true){
        cout<<"Stop!"<<endl;
    }else{
        cout<<"Go Through!"<<endl;
    }
    if(green_light){
        cout<< "The light is green!" << endl;
    }else{
        cout<< "The light is not green!" << endl;
    }
    //sizeof()
    cout <<"sizeof(bool): " << sizeof(bool) << endl;
    //Printing out a bool
    //1 --> True
    //0 --> False
    cout << endl;
    cout << "red_light: " << red_light << endl;
    cout << "green_light: " << red_light << endl;
    cout << boolalpha;
    cout << "red_light: " << red_light << endl;
    cout << "green_light: " << red_light << endl;
    return 0;

}