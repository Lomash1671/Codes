//Merge Sort
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr = {38 , 27 , 43 , 3 , 9 , 82 , 10};
    stable_sort(arr.begin() , arr.end());
    for(int num : arr){
        cout<<num<<" ";
    }
    return 0;
} 