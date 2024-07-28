//Sum of Diagonal Elements in matrix 
#include<iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int primaryDiagonalSum = 0;
    for(int i = 0; i < 3; ++i) {
        primaryDiagonalSum += arr[i][i];
    }
    int secondaryDiagonalSum = 0;
    for(int i = 0; i < 3; ++i) {
        secondaryDiagonalSum += arr[i][2 - i];
    }

    cout << "Sum of primary diagonal is: " << primaryDiagonalSum << endl;
    cout << "Sum of secondary diagonal is: " << secondaryDiagonalSum << endl;

    return 0;
}