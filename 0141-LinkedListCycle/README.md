# **Linked List Cycle**

## **Problem Statement**
Given a linked list, determine if it has a cycle in it. A linked list has a cycle if some node in the list is connected back to a previous node, forming a loop.

The function should return True if a cycle exists and False otherwise.

**Example Input:**
  ```
  head = [3, 2, 0, -4]
  pos = 1 (tail connects to node index 1)
  Output: True

  ```
---

## **Solutions Overview**
### **Floyd’s Cycle Detection Algorithm (Two Pointer Approach) (C++)**
This solution uses two pointers (slow and fast) to detect cycles efficiently. The process is as follows:

1. Initialize two pointers:
   - slow moves one step at a time.
   - fast moves two steps at a time.
2. Traverse the linked list:
   - If fast reaches NULL, return False (no cycle).
   - If slow and fast meet at the same node, return True (cycle detected).
3. This method works because if there is a cycle, fast will eventually catch up to slow.

 
- Language: C++
- Code:
  ```
  /**
   * Definition for singly-linked list.
   * struct ListNode {
   *     int val;
   *     ListNode *next;
   *     ListNode(int x) : val(x), next(NULL) {}
   * };
   */
  class Solution {
  public:
      bool hasCycle(ListNode *head) {
          ListNode* slow = head;
          ListNode* fast = head;
          while (fast && fast->next) {
              slow = slow->next;
              fast = fast->next->next;
              if (slow == fast) { // Cycle detected
                  return true;
              }
          }
          return false;
      }
  };
  ```
- Time Complexity: O(n)   
  Each node is visited at most once.  
- Space Complexity: O(1) 
  The algorithm only uses two pointers, requiring constant extra space.
  
  
### **Floyd’s Cycle Detection Algorithm (Two Pointer Approach) (Python)**
This Python implementation follows the same logic as the C++ version:

1. Initialize two pointers (slow and fast).
2. Traverse the linked list:
   - slow moves one step, fast moves two steps.
   - If fast reaches None, return False (no cycle).
   - If slow == fast, return True (cycle detected).
 
- Language: Python
- Code:
  ```
  from typing import Optional
  
  class ListNode:
      def __init__(self, x):
          self.val = x
          self.next = None
  
  class Solution:
      def hasCycle(self, head: Optional[ListNode]) -> bool:
          slow, fast = head, head
          while fast and fast.next:
              slow = slow.next
              fast = fast.next.next
              if slow == fast:  # Cycle detected
                  return True
          return False
  ```
- Time Complexity: O(m + n)   
  Each node is visited once.  
- Space Complexity: O(1) 
  The algorithm modifies the lists in-place. 
  
---

## **Conclusion**
This problem is a classic cycle detection task, efficiently solved using Floyd’s Cycle Detection Algorithm (also known as the Tortoise and Hare algorithm). The solution ensures that cycles are detected in O(n) time with O(1) space, making it an optimal approach.
### **Future Plans**
- Add more solutions using other languages like Python and Java.
- Implement a hash set approach, which uses extra space but is simpler.
- Extend the solution to detect the cycle’s starting node.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
