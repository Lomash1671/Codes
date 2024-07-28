//Add Elements to a list in c++
#include<iostream>
#include<list>
using namespace std;
int main(){
    //Create a list 
    list<int> l = {1 , 2 , 3};
    //display the original list
    cout<<"Original list is : ";
    for(int l : l){
        cout<<l<<" ";
    }
    //Add elements at the beginning 
    l.push_front(0);
    //Add elements at the end
    l.push_back(4);
    //Display the modified list 
    cout<<endl<<"Final List: ";
    for(int l : l){
        cout<<l<<" ";
    }
    return 0;
}