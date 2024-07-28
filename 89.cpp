#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int& y = x;

    cout << "x = " << x << endl; // Output: x = 5
    cout << "y = " << y << endl; // Output: y = 5

    y = 10;

    cout << "x = " << x << endl; // Output: x = 10
    cout << "y = " << y << endl; // Output: y = 10

    int a = 20;
    int b = 30;

    cout << "a = " << a << ", b = " << b << endl; // Output: a = 20, b = 30

    swap(a, b);

    cout << "a = " << a << ", b = " << b << endl; // Output: a = 30, b = 20

    return 0;
}