# **Remove Nth Node From End of List**

## **Problem Statement**
Given the head of a singly linked list and an integer n, remove the n-th node from the end of the list and return its head.  

**Example Input:**
  ```
  Input: head = [1, 2, 3, 4, 5], n = 2
  Output: head = [1, 2, 3, 5]
  ```
---

## **Solutions Overview**
### **Two-Pointer Approach (C++)**
This solution uses a dummy node and two pointers (ptr_r and ptr_l) to find the n-th node from the end in a single pass. Initially, both pointers start at the dummy node. The right pointer (ptr_r) advances n + 1 steps ahead, creating a gap of n nodes between the two pointers. Both pointers then move one step at a time until ptr_r reaches the end of the list. The left pointer (ptr_l) will then point to the node before the target, allowing for easy removal by adjusting the pointers.  

- Language: C++
- Code:
  ```
  class Solution {
  public:
      ListNode* removeNthFromEnd(ListNode* head, int n) {
          ListNode* dummy = new ListNode(0);
          dummy->next = head;
          ListNode* ptr_r = dummy;
          ListNode* ptr_l = dummy;
  
          while (n-- && ptr_r != nullptr) {
              ptr_r = ptr_r->next;
          }
          ptr_r = ptr_r->next;
          while (ptr_r) {
              ptr_r = ptr_r->next;
              ptr_l = ptr_l->next;
          }
          ptr_l->next = ptr_l->next->next;
          return dummy->next;
      }
  };
  ```
- Time Complexity: O(n)
  The list is traversed twice (once to move ptr_r and once for both pointers together).
- Space Complexity: O(1)  
  As no additional data structures proportional to the size of the input are used.

---

## **Conclusion**
The two-pointer approach is efficient for removing the n-th node from the end of a linked list. By leveraging a dummy node, the solution ensures edge cases such as removing the head node are handled seamlessly. This method is optimal in both time and space complexity.  

### **Future Plans**
- Add more solutions using other languages like Python and Java.
- Implement automated tests to ensure correctness across edge cases.
- Explore alternative algorithms to further optimize the performance for larger datasets.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
