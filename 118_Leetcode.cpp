//LEETCODE - 328 
#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even_start = head->next;

        while (odd->next && even->next) {
            odd->next = even->next;  // Connect all odds
            even->next = odd->next->next;  // Connect all evens
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_start;  // Place the first even node after the last odd node.
        return head;
    }
};

// Helper function to create a linked list from an array
ListNode* createList(const int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Helper function to print a linked list
void printList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Solution solution;

    // Create a sample linked list
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    ListNode* head = createList(arr, size);

    cout << "Original list: ";
    printList(head);

    // Call the oddEvenList method
    head = solution.oddEvenList(head);

    cout << "Modified list: ";
    printList(head);

    // Free allocated memory
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
