//STORAGE CLASSES
// #include<iostream>
// using namespace std;
// int main(){
//     auto x = 10;
//     cout<<x<<endl;
// }
#include<iostream>
using namespace std;
void example(){
    //register 
    int counter = 0;
    for(int i =0; i<10 ;i++){
        counter += i;
    }
    cout << counter;
}
int main(){
    example();
}