//Access Elements using an iterator
//We can use iterators to access a list element at a specified position 
//USING FOR LOOP INPLACE OF DOUBLED ITR
//Example 
#include <iostream>
#include <list>
using namespace std;

int main() {
    // Create a list
    list<int> numbers = {1, 2, 3, 4, 5};

    // Create an iterator
    list<int>::iterator itr = numbers.begin();

    // Use a single for loop to find both the second and fourth elements
    for (int i = 0; i < numbers.size(); ++i, ++itr) {
        if (i == 1) {
            cout << "Second Element: " << *itr << endl;
        }
        if (i == 3) {
            cout << "Fourth Element: " << *itr << endl;
        }
    }

    return 0;
}

