#include<iostream>
using namespace std;




extern int globalVar;
void example()
{
    globalVar++;
    cout<<globalVar;
}


int main()
{
    example();
    return 0;
}
