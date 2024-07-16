// STL = It is a collection of library/algo, function and other components like data structures 
// to simplify development / c++ programming 
// Container = It is used to store the data in sequential manner to simplify your requirement.

// Sequential Container = Simple array without STL
// Array without STL = It does not have predefined functions 

/* Array [ADVANTAGE]
1) Optimization
2) No need to write complete logic codes 
3) Data is decided at runtime 
[DISADVANTAGE]
1) It is static in nature 
2)

VECTOR - It is dynamic in nature
*/
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Ajay");
    s.push("Ajab");
    s.push("Gajab");
    s.push("sajab");
    cout << "Top element "<<s.top()<<endl;
    s.pop();
    cout<<"element after pop "<<s.top()<<endl;

}