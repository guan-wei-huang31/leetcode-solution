#include <iostream>
#include<vector>
using namespace std;
/**
 * Definition for singly-linked list.
*/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* ptr_r = dummy;
        ListNode* ptr_l = dummy;

        while(n-- && ptr_r != NULL){
            ptr_r = ptr_r->next;
        }
        ptr_r = ptr_r->next;
        while(ptr_r){
            ptr_r = ptr_r->next;
            ptr_l = ptr_l->next;
        }
        ptr_l->next = ptr_l->next->next;
        return dummy->next;
    }
};

ListNode* createLinkedList(const vector<int>& nums) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    for (int num : nums) {
        current->next = new ListNode(num);
        current = current->next;
    }
    return dummy->next;
}

// Helper function to print a linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current) {
        cout << current->val;
        if (current->next) cout << " -> ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Solution solution;

    // Create a linked list from a vector
    vector<int> nums = {1, 2, 3, 4, 5};
    ListNode* head = createLinkedList(nums);

    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);

    // Remove the 2nd node from the end
    int n = 2;
    head = solution.removeNthFromEnd(head, n);

    // Print the modified linked list
    cout << "Modified Linked List: ";
    printLinkedList(head);

    return 0;
}
