/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* ptr_r = dummy;
        ListNode* ptr_l = dummy;

        for (int i = 0; i <= n; i++) {
            ptr_r = ptr_r->next;
        }

        while(ptr_r){
            ptr_r = ptr_r->next;
            ptr_l = ptr_l->next;
        }
        ListNode* toDelete = ptr_l->next;
        ptr_l->next = toDelete->next;
        delete toDelete; 
        
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
    }
};
