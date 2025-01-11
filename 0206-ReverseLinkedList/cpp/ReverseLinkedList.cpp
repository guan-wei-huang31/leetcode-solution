#include <iostream>
#include<vector>
using namespace std;
/**
 * Definition for singly-linked list.
 **/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp;
        ListNode* ptr_r = head;
        ListNode* ptr_l = NULL;
        while(ptr_r){
            temp = ptr_r->next;
            ptr_r->next = ptr_l;
            ptr_l = ptr_r;
            ptr_r = temp;
        }
        return ptr_l;
    }
};

int main() {
    //  1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);


    cout << "Original List: ";
    ListNode* current = head;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    Solution s1;
    ListNode* reversedHead = s1.reverseList(head);

    cout << "Reversed List: ";
    current = reversedHead;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}
