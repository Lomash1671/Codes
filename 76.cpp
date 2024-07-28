#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main() {
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    sort(arr.begin(), arr.end());
    
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
