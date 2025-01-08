#include <iostream>
#include <string>
using namespace std;
/**
 * Definition for singly-linked list.**/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* pos = dummy;
        while(pos->next != NULL){
            if (pos->next->val == val){
                ListNode* tmp = pos->next;
                pos->next = pos->next->next;
                delete tmp;
            }else{
                pos = pos->next;
            }
        }
        head = dummy->next;
        delete dummy;
        return head;
    }
};

// Function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "null" << endl;
}

// Function to create a linked list from an array
ListNode* createLinkedList(const int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (int i = 1; i < size; ++i) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

int main() {
    // Initialize the linked list
    int arr[] = {1, 2, 6, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    ListNode* head = createLinkedList(arr, size);

    cout << "Original Linked List: \n";
    printList(head);

    // Remove elements with value 6
    Solution solution;
    int valToRemove = 6;
    head = solution.removeElements(head, valToRemove);

    cout << "Linked List after removing elements with value " << valToRemove << ": \n";
    printList(head);

    // Free allocated memory
    while (head != nullptr) {
        ListNode* tmp = head;
        head = head->next;
        delete tmp;
    }

    return 0;
}
