//PROBLEM
/* 
1-Reverse()
2-Sort()
3-Unique()
4-Empty()
5-Size()
6-Clear()
7-Merge()
*/
#include <iostream>
#include <list>
#include <algorithm> // for sort()
using namespace std;

void printList(const list<int>& lst) {
    for (int num : lst) {
        cout << num << " ";
    }
    cout << endl;
}

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Reverse" << endl;
    cout << "2. Sort" << endl;
    cout << "3. Unique" << endl;
    cout << "4. Check if Empty" << endl;
    cout << "5. Size" << endl;
    cout << "6. Clear" << endl;
    cout << "7. Merge with another list" << endl;
    cout << "8. Exit" << endl;
}

int main() {
    list<int> numbers;
    int n, element, choice;

    // User input for list elements
    cout << "Enter the number of elements in your list: ";
    cin >> n;
    cout << "Enter the elements of your list: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> element;
        numbers.push_back(element);
    }

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                numbers.reverse();
                cout << "List reversed: ";
                printList(numbers);
                break;
            case 2:
                numbers.sort();
                cout << "List sorted: ";
                printList(numbers);
                break;
            case 3:
                numbers.unique();
                cout << "List after removing duplicates: ";
                printList(numbers);
                break;
            case 4:
                if (numbers.empty()) {
                    cout << "The list is empty." << endl;
                } else {
                    cout << "The list is not empty." << endl;
                }
                break;
            case 5:
                cout << "Size of the list: " << numbers.size() << endl;
                break;
            case 6:
                numbers.clear();
                cout << "List cleared." << endl;
                break;
            case 7: {
                list<int> otherList;
                int m, elem;
                cout << "Enter the number of elements in the other list: ";
                cin >> m;
                cout << "Enter the elements of the other list: " << endl;
                for (int i = 0; i < m; ++i) {
                    cin >> elem;
                    otherList.push_back(elem);
                }
                numbers.merge(otherList);
                cout << "List merged with another list: ";
                printList(numbers);
                break;
            }
            case 8:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

