//PROBLEM: If list is empty then add element to first or else add element to the specified position
#include <iostream>
#include <list>
using namespace std;

void addElement(list<int>& numbers, int element, int position) {
    // Check if the list is empty
    if (numbers.empty()) {
        numbers.push_back(element);  // Add element to the beginning if list is empty
    } else {
        // Create an iterator and move it to the specified position
        list<int>::iterator itr = numbers.begin();
        for (int i = 0; i < position && itr != numbers.end(); ++i) {
            ++itr;
        }
        // Insert the element at the specified position
        numbers.insert(itr, element);
    }
}

int main() {
    // Create a list
    list<int> numbers = {1, 2, 3, 4, 5};

    // Element to be added
    int element = 10;

    // Position to add the element (0-based index)
    int position = 2;

    // Add element to the list
    addElement(numbers, element, position);

    // Display the list
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
