#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
void rotateArray(vector<int>& arr, int d) {
    int n = arr.size();
    if (n == 0 || d % n == 0) {
        return;
    }
    d = d % n;
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
}
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int d;

    cout << "Enter the number of positions to rotate the array: ";
    cin >> d;

    rotateArray(arr, d);

    cout << "Rotated array: ";
    printArray(arr);

    return 0;
}

