#include <iostream>
using namespace std;

int main(){
    int int_data{33};
    double double_data{55};

    //References
    int& ref_int_data{int_data};
    double& ref_double_data{double_data};

    //Print stuff out
    cout << "int_data : " << int_data << endl; // 33
    cout << "&int_data : " << &int_data << endl; // 0x7ffdc20ed60c
    cout << "double_data : " << double_data << endl; // 55
    cout << "&double_data : " << &double_data << endl; // 0x7ffdc20ed610

    cout << "=======================" << endl;

    cout << "ref_int_data : " << ref_int_data << endl; // 33
    cout << "&ref_int_data : " << &ref_int_data << endl; // 0x7ffdc20ed60c
    cout << "ref_double_data : " << ref_double_data << endl; // 55
    cout << "&ref_double_data : " << &ref_double_data << endl; // 0x7ffdc20ed610

    int_data = 111;
    double_data = 67.2;

    //Print stuff out
    cout << endl;
    cout << "int_data : " << int_data << endl; // 111
    cout << "&int_data : " << &int_data << endl; // 0x7ffdc20ed60c
    cout << "double_data : " << double_data << endl; // 67.2
    cout << "&double_data : " << &double_data << endl; // 0x7ffdc20ed610

    cout << "=======================" << endl;

    cout << "ref_int_data : " << ref_int_data << endl; // 111
    cout << "&ref_int_data : " << &ref_int_data << endl; // 0x7ffdc20ed60c
    cout << "ref_double_data : " << ref_double_data << endl; // 67.2
    cout << "&ref_double_data : " << &ref_double_data << endl; // 0x7ffdc20ed610


    ref_int_data = 1012;
    ref_double_data = 1000.45;

   //Print stuff out
    cout << endl; 
    cout << "int_data : " << int_data << endl; // 1012
    cout << "&int_data : " << &int_data << endl; // 0x7ffdc20ed60c
    cout << "double_data : " << double_data << endl; // 1000.45
    cout << "&double_data : " << &double_data << endl; // 0x7ffdc20ed610

    cout << "=======================" << endl;

    cout << "ref_int_data : " << ref_int_data << endl; // 1012
    cout << "&ref_int_data : " << &ref_int_data << endl; // 0x7ffdc20ed60c
    cout << "ref_double_data : " << ref_double_data << endl; // 1000.45
    cout << "&ref_double_data : " << &ref_double_data << endl; // 0x7ffdc20ed610
    
    return 0;
}