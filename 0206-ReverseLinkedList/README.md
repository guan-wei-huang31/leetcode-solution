# **Reverse Linked List**

## **Problem Statement**
Given the head of a singly linked list, reverse the list in-place and return the head of the reversed list.

**Example Input:**
  ```
  Input: head = [1, 2, 3, 4, 5]  
  Output: [5, 4, 3, 2, 1]    
  ```
---

## **Solutions Overview**
### **Iterative Approach (C++)**
This solution uses three pointers:
 - ptr_r (right pointer) to traverse the list.
 - ptr_l (left pointer) to keep track of the reversed portion of the list.
 - temp to temporarily store the next node in the original list.
The process iterates through the list, reversing the next pointers for each node. After the list is fully reversed, the ptr_l pointer becomes the new head of the list.  

 
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
- Time Complexity: O(n)   
  Each node is visited exactly once.  
- Space Complexity: O(1) 
  The algorithm reverses the list in-place without using extra space.  
  
  
### **Iterative Approach (Python)**
This Python implementation follows a similar logic to the C++ version. It uses two pointers:
 - pre: Stores the previous node (initially set to None).
 - cur: The current node being processed.
Each iteration does the following:
 - Temporarily stores the next node (temp).
 - Reverses the link (cur.next = pre).
 - Moves the pre pointer to cur.
 - Moves cur to temp.
After all nodes are processed, pre will point to the new head of the reversed list.
 
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
- Time Complexity: O(n)   
  Each node is visited exactly once.  
- Space Complexity: O(1) 
  No additional data structures are used, only pointer modifications.   
  
---

## **Conclusion**
The iterative approach provides an efficient way to reverse a linked list in-place using constant space. Both the C++ and Python implementations follow the same logic with minor syntax differences. The Python solution is more concise due to the dynamic nature of the language.

### **Future Plans**
- Add more solutions using other languages like Python and Java.
- Implement automated tests to ensure correctness across edge cases.
- Explore alternative algorithms to further optimize the performance for larger datasets.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
