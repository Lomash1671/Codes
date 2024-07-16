#include <iostream>
using namespace std;

void show(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int arr[], int& size, int value, int position) {
    if (position > size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    size++;
}

void deleteElement(int arr[], int& size, int position) {
    if (position >= size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void update(int arr[], int size, int position, int value) {
    if (position >= size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    arr[position] = value;
}

void select(int arr[], int size, int position) {
    if (position >= size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    cout << "Element at position " << position << " is: " << arr[position] << endl;
}

int main() {
    int arr[100] = {4, 6, 7, 8};
    int size = 4;
    int choice, value, position;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Show Array\n";
        cout << "2. Insert Element\n";
        cout << "3. Delete Element\n";
        cout << "4. Update Element\n";
        cout << "5. Select Element\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                show(arr, size);
                break;
            case 2:
                cout << "Enter value to insert: ";
                cin >> value;
                cout << "Enter position to insert at (0-indexed): ";
                cin >> position;
                insert(arr, size, value, position);
                break;
            case 3:
                cout << "Enter position to delete from (0-indexed): ";
                cin >> position;
                deleteElement(arr, size, position);
                break;
            case 4:
                cout << "Enter position to update (0-indexed): ";
                cin >> position;
                cout << "Enter new value: ";
                cin >> value;
                update(arr, size, position, value);
                break;
            case 5:
                cout << "Enter position to select (0-indexed): ";
                cin >> position;
                select(arr, size, position);
                break;
            case 6:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}
