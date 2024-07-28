#include<iostream>
#include<list>
using namespace std;
int main(){
    //Create a list 
    list<int> numbers = {1,2,3,4};
    //Display the original list
    cout<<"Original list: ";
    for(int number : numbers){
        cout<<number<<" ";
    }
    //Create an iterator to point to the 1st position 
    list<int>::iterator it = numbers.begin();
    //increment the iterator to point to the 3rd position 
    ++it;
    ++it;
    //insert 0 at the 3rd position of list 
    numbers.insert(it,0);
    //Display the modified list 
    cout<<"\nModified list: ";
    for(int number : numbers){
        cout<<number<<" ";
    }
    return 0;

}