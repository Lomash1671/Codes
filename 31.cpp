#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5,1);
    cout << "print all elements"<<endl;
    for(int i : v){
        cout << i << " ";
    }
}