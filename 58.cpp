//find_if without using lambda
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// Predicate function to find even numbers
bool isEven(int n) {
    return n % 2 == 0;
}


int main() {
    vector<int> num = {1, 3, 5, 8, 10, 13};




    // Using find_if with the isEven predicate function
    auto it = find_if(num.begin(), num.end(), isEven);


    if (it != num.end()) {
        cout << "First even number found is : " << *it << endl;
    } else {
        cout << "No even number found" << endl;
    }


    return 0;
}
