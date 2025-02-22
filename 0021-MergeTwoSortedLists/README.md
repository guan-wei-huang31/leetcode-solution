# **Merge Two Sorted Lists**

## **Problem Statement**
You are given two singly linked lists, list1 and list2, which are both sorted in ascending order. Your task is to merge these two lists into one sorted linked list. The merged list should also be in ascending order.

The function should return the head of the merged linked list.

**Example Input:**
  ```
  list1 = [1, 2, 4]
  list2 = [1, 3, 4]
  Output: [1, 1, 2, 3, 4, 4]
  ```
---

## **Solutions Overview**
### **Iterative Approach (C++)**
This solution uses a dummy node and a pointer (temp) to construct the merged linked list. The process is as follows:

1. Initialize a dummy node (dummy) to simplify list merging.
2. Use temp to track the last node of the merged list.
3. Traverse list1 and list2:
   - Compare list1->val and list2->val.
   - Append the smaller node to the merged list.
   - Move the pointer of the list whose node was selected.
4. Attach any remaining nodes in list1 or list2 after the loop.
5. Return dummy.next, which points to the head of the merged list.

 
- Language: C++
- Code:
  ```
  #include <iostream>
  using namespace std;
  
  struct ListNode {
      int val;
      ListNode* next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode* next) : val(x), next(next) {}
  };
  
  class Solution {
  public:
      ListNode* reverseList(ListNode* head) {
          ListNode* temp = nullptr;
          ListNode* ptr_r = head;
          ListNode* ptr_l = nullptr;
          
          while (ptr_r) {
              temp = ptr_r->next;  // Store the next node
              ptr_r->next = ptr_l; // Reverse the pointer
              ptr_l = ptr_r;       // Move ptr_l to current node
              ptr_r = temp;        // Move ptr_r to the next node
          }
          
          return ptr_l; // New head of the reversed list
      }
  };
  ```
- Time Complexity: O(m + n)   
  Each node from list1 and list2 is processed exactly once.  
- Space Complexity: O(1) 
  The merging is done in-place with constant extra space.
  
  
### **Iterative Approach (Python)**
This Python implementation follows the same logic as the C++ version:

1. Initialize a dummy node (dummy) to simplify merging.
2. Use a pointer (temp) to track the last node of the merged list.
3. Traverse both lists, comparing node values and appending the smaller node to temp.
4. Attach any remaining nodes.
5. Return dummy.next as the new head of the merged list.
 
- Language: Python
- Code:
  ```
  class ListNode:
      def __init__(self, val=0, next=None):
          self.val = val
          self.next = next
  
  class Solution:
      def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
          pre, cur = None, head
          while cur:
              temp = cur.next  # Store next node
              cur.next = pre   # Reverse the pointer
              pre = cur        # Move pre to current node
              cur = temp       # Move cur to next node
          return pre  # New head of reversed list
  ```
- Time Complexity: O(m + n)   
  Each node is visited once.  
- Space Complexity: O(1) 
  The algorithm modifies the lists in-place. 
  
---

## **Conclusion**
This problem is a classic linked list merging task, efficiently solved using the dummy node + two-pointer technique. The solution ensures that the lists are merged in-place with O(1) space complexity, making it an optimal approach.

### **Future Plans**
- Add more solutions using other languages like Python and Java.
- Implement a recursive approach for merging lists.
- Extend the solution to support k-way merging for multiple lists.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
