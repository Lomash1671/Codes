#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> max;
    priority_queue<int , vector<int> , greater<int> > mini;
    max.push(1);
    max.push(2);
    max.push(3);
    max.push(4);
    cout<<"size "<<max.size()<<endl;
    int n = max.size();
    for(int i =0 ; i<n; i++){
        cout<<max.top()<<" ";
        max.pop();
    }
    cout << endl;
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3); 
    int m = mini.size();
    for(int i =0 ; i<m; i++){{
        cout << mini.top()<<" ";
        mini.pop();
    }
    cout << endl;
}
}