//Using Iterator 
#include <iostream>
#include<list>
using namespace std;
int main(){
    //Create a list and an iterator 
    list<int> numbers = {0,1,2,3,4,5,3};
    list<int> :: iterator itr = numbers.begin();
    //Display the original list 
    cout <<"Initial List: ";
    for(int number : numbers){
        cout << number << " ";
    }
    //Point iterator to the 4th element
    for(int i = 0 ; i< 3 ; i++){
        ++itr;
    }
    //Remove the 4th element
    numbers.remove(*itr);
    //Display the modified list
    cout <<"\nModified List: ";
    for(int number : numbers){
        cout << number << " ";
    }
    return 0;

}