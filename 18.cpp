// Ram and Mohan are two brothers. They are not good in maths. So their father decided to give some assignment as a game so that they can enjoy as well as they can learn the concept of number systems. So he gave two numbers to them. One is the sum of two numbers, x and y, and another is the product of same two numbers. Help them to write a code to find x and y. 
// Note: 
// The two numbers should be printed in ascending order. 
// Input format: 
// The input contains two integers in the same line separated by space, that denotes the sum of x and y and the product of x and y, respectively. 
// Output format: 
// The output consists of two numbers separated by space which corresponds to x and y in ascending order. 
// Sample Input 1: 
// 5 6 
// Sample Output 1: 
// 2 3 
// Sample Input 2: 
// 15 50 
// Sample Output 2: 
// 5 10  

#include <iostream>
using namespace std;

int main() {
    // Reading input
    int sum, product;
    cin >> sum >> product;

    // We need to find x and y such that:
    // x + y = sum
    // x * y = product
    
    // We will iterate over possible values of x from 1 to sum/2
    int x, y;
    bool found = false;
    for (x = 1; x <= sum / 2; ++x) {
        y = sum - x;
        if (x * y == product) {
            found = true;
            break;
        }
    }

    // Output the numbers in ascending order
    if (found) {
        if (x <= y) {
            cout << x << " " << y << endl;
        } else {
            cout << y << " " << x << endl;
        }
    } else {
        cout << "No valid solution found." << endl;
    }

    return 0;
}
