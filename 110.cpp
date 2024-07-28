//Access Elements using an iterator
//We can use iterators to access a list element at a specified position 
//Example 
#include <iostream>
#include <list>
using namespace std;
int main(){
    //Create a list
    list<int> numbers = {1 , 2 ,3 ,4 , 5};
    //Create an iterator
    list<int>::iterator itr = numbers.begin();
    //increment itr to point to the second element
    ++itr;
    //display the second element 
    cout<<"Second Element: "<<*itr<<endl;
    //increment itr to point to the fourth element
    ++itr;
    ++itr;
    //display the fourth element
    cout<<"Fourth Element: "<<*itr<<endl;
    return 0;
}