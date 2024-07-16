//Problem Statement in stack
/*
1. Size of the stack
2. Insert element into the stack
3. Delete element from stack
4. Top Element of the stack
5. Exit

Enter your choice: 1
Size of the stack: 0
1. Size of the stack
2. Insert element into the stack
3. Delete element from stack
4. Top Element of the stack
5. Exit
*/
#include <iostream>
#include <stack>
using namespace std;


void displayStack(stack<int> s) {
    if (s.empty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Elements in the stack: ";
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
}


int main() {
    stack<int> s;
    int c;


    while (true) {
        cout << "1. Size of the Stack\n";
        cout << "2. Insert Element into the Stack\n";
        cout << "3. Delete Element from the Stack\n";
        cout << "4. Top Element of the Stack\n";
        cout << "5. Display Elements of the Stack\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> c;


        switch (c) {
            case 1:
                cout << "Size of the stack: " << s.size() << endl;
                break;
            case 2: {
                int n;
                while (true) {
                    cout << "Enter element to push (-1 to stop): ";
                    cin >> n;
                    if (n == -1) break;
                    s.push(n);
                    cout << "Element pushed\n";
                }
                break;
            }
            case 3:
                if (s.empty()) {
                    cout << "Stack underflow\n";
                } else {
                    s.pop();
                    cout << "Element popped\n";
                }
                break;
            case 4:
                if (s.empty()) {
                    cout << "Stack is empty\n";
                } else {
                    cout << "Top element of the stack: " << s.top() << endl;
                }
                break;
            case 5:
                displayStack(s);
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid input\n";
                break;
        }
    }


    return 0;
}
