// INPUT = 1 2 3 4 5
// OUTPUT = 4 5 1 2 3
#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& lst) {
    for (int num : lst) {
        cout << num << " ";
    }
    cout << endl;
}

list<int> rearrangeList(const list<int>& inputList) {
    // Copy the input list to modify it
    list<int> resultList = inputList;

    // Define an iterator to the start of the list
    auto it = resultList.begin();

    // Advance the iterator to the position after the third element (index 3)
    advance(it, 3); // 0-based indexing, so this points to the element 4

    // Extract the sublists
    list<int> firstPart(it, resultList.end()); // Elements from index 3 to end
    list<int> secondPart(resultList.begin(), it); // Elements from start to index 2

    // Combine the sublists
    firstPart.splice(firstPart.end(), secondPart);

    return firstPart;
}

int main() {
    // Create the original list
    list<int> originalList = {1, 2, 3, 4, 5};

    cout << "Original list: ";
    printList(originalList);

    // Rearrange the list
    list<int> updatedList = rearrangeList(originalList);

    cout << "Updated list: ";
    printList(updatedList);

    return 0;
}
