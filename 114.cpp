//Remove the element from specified position
#include<iostream>
#include<list>
using namespace std;
int main(){
    //Create a list 
    list<int> numbers = {1,2,1,3,4,1};
    //Display the original list 
    cout<<"Initial list: "<<endl;
    for(int number : numbers){
        cout<<number<<" ";
    }
    //Remove all the elements with value 1
    numbers.remove(1);
    //Display the modified list 
    cout << endl <<"Final List: ";
    for(int number : numbers){
        cout << number <<", ";
    }
    return 0;
}