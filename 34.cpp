#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> s;
    s.push("abha");
    s.push("sabha");
    s.push("mabha");
    /*
    Size function
    pop function
    front()
    */
   cout<<s.size()<<endl;
   s.pop();
   cout<<s.size()<<endl;
   cout<<s.front()<<endl;
   //Iterations
    for (queue<string> q = s; !q.empty(); q.pop()) {
        cout << q.front() << " ";
    }   

}
