//LINKED LIST 
#include<iostream>
#include<list>
using namespace std;
int main(){
    //Creating a List
    list<int> numbers = {1 ,2 , 3 , 4 ,5};
    cout << "List Elements: ";
    for(int number : numbers){
        cout << number << " ";
    }
   return 0;
}