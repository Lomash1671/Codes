//You have been given a linked list of integers. Your task is to write a function that deletes a node from a given position, 'POS'.
//Note :
//Assume that the Indexing for the linked list always starts from 0.
//If the position is greater than or equal to the length of the linked list, you should return the same linked list without any change.

#include <iostream>
#include <list>
using namespace std;

list<int> deleteNode(list<int>& numbers, int pos) {
    // If the list is empty or pos is negative, return the original list
    if (numbers.empty() || pos < 0) {
        return numbers;
    }

    // Get an iterator to the beginning of the list
    auto it = numbers.begin();
    
    // Advance the iterator to the given position
    for (int i = 0; i < pos; ++i) {
        if (it == numbers.end()) {
            return numbers; // If pos is greater than or equal to the length, return the original list
        }
        ++it;
    }

    // If pos is within the bounds, erase the element at the position
    if (it != numbers.end()) {
        numbers.erase(it);
    }

    return numbers;
}

void printList(const list<int>& numbers) {
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    list<int> numbers = {1, 2, 3, 4, 5};

    cout << "Original list: ";
    printList(numbers);

    // Delete node at position 2
    deleteNode(numbers, 2);
    cout << "List after deleting node at position 2: ";
    printList(numbers);

    // Delete node at position 0
    deleteNode(numbers, 0);
    cout << "List after deleting node at position 0: ";
    printList(numbers);

    // Delete node at position 10 (out of range)
    deleteNode(numbers, 10);
    cout << "List after trying to delete node at position 10: ";
    printList(numbers);

    return 0;
}
