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
    void reorderList(ListNode* head) {
		if (!head || !head->next) return;
        // Find middle point
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse second part
        ListNode* second = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        while(second){
            ListNode* temp = second->next;
            second->next = prev;
            prev = second;
            second = temp;
        }

        // Merge prev and first
        ListNode* first = head;
        while(prev){
            ListNode* temp1 = first->next;
            ListNode* temp2 = prev->next;
            first->next = prev;
            prev->next = temp1;
            first = temp1;
            prev = temp2;
        }
    }
};