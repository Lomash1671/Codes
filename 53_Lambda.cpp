#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> numbers = {5, 3, 8, 1, 4};
    sort(numbers.begin(), numbers.end(), [](int a, int b){
         return a > b;
    });
    cout << "Sorted Numbers: ";
    for(int num : numbers){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
