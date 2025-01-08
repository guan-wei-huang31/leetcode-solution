# **Linked List: Remove Elements**

## **Problem Statement**
This project provides a solution for removing all nodes from a singly-linked list that have a specific value. The function takes the head of the linked list and a target value as inputs and returns the modified linked list with the specified nodes removed.  

**Example Input:**
  ```
  Input: head = [1, 2, 6, 3, 4, 5, 6], val = 6
  Output: [1, 2, 3, 4, 5]
  Explanation: The nodes with the value 6 are removed from the list.
  ```
---

## **Solutions Overview**
### **Iterative Approach (C++)**
The iterative approach is used to efficiently traverse the linked list and remove nodes with the specified value. The solution uses a dummy node to simplify edge cases such as removing the head node.  
  1. Create a dummy node pointing to the head of the linked list.
  2. Use a pointer (pos) to traverse the list.
  3. If the next node's value matches the target value, remove it by updating the next pointer.
  4. Otherwise, move the pointer forward.
  5. Finally, return the modified list, excluding the dummy node.
  
- Language: C++
- Code:
  ```
  struct ListNode {
      int val;
      ListNode* next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode* next) : val(x), next(next) {}
  };
  
  class Solution {
  public:
      ListNode* removeElements(ListNode* head, int val) {
          ListNode* dummy = new ListNode(0);
          dummy->next = head;
          ListNode* pos = dummy;
          while (pos->next != nullptr) {
              if (pos->next->val == val) {
                  ListNode* tmp = pos->next;
                  pos->next = pos->next->next;
                  delete tmp;
              } else {
                  pos = pos->next;
              }
          }
          head = dummy->next;
          delete dummy;
          return head;
      }
  };
  ```

- Time Complexity: O(n)
  Each node is visited exactly once, making the solution linear in time complexity.  

- Space Complexity: O(1)
  The solution uses only a few pointers, with no additional data structures.  
  
---

## **Conclusion**
The iterative approach is an efficient solution for the "Remove Elements from Linked List" problem. It handles edge cases like removing the head node seamlessly by using a dummy node. With linear time complexity and constant space complexity, the solution is optimal for large linked lists.  

### **Future Plans**
- Add implementations in other languages, such as Python and Java.
- Create automated tests to validate edge cases.
- Explore alternative methods to achieve a single-pass solution with minimal memory usage.
  
### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
