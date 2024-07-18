//SCOPE RESOLUTION OPERATOR (::)
//To define a function outside the
#include<iostream>
#include<set>
using namespace std;
int main(){
    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    for(auto i :s){
        cout <<i <<endl;
    }cout<<endl;
    set<int> :: iterator it =s.begin();
    it++;
    s.erase(it);
//     for(auto i:s){
//         cout<<i<<endl;
//     }
//     cout<<endl;
// }
int index = 0 ;
for(auto it = s.begin(); it != s.end(); ++it) {
        cout << "Element " << index << ": " << *it << std::endl;
        index++;
}cout <<endl;
}