#include <iostream>     
#include <algorithm>    
#include<vector>

using namespace std;

int main() {
    // Define the array
    vector<int> arr = {3, 4, 7, 2, 7};

    // Count how many times 7 appears in the array
    int count_7 = count(arr.begin(), arr.end(), 7);

    // Print 7 for each time it appears
    for (int i = 0; i < count_7; ++i) {
        cout << 7 << " ";
    }
    cout << endl; // Print a newline

    // Print how many times 7 appears
    cout << "7 is " << count_7 << " times" << endl;

    return 0;
}