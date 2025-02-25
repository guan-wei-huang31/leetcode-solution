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
  ```
- Time Complexity: O(n)
  The list is traversed twice (once to move ptr_r and once for both pointers together).
- Space Complexity: O(1)  
  As no additional data structures proportional to the size of the input are used.

### **Two-Pointer Approach (Python)**
This solution is the same as C++

- Language: Python
- Code:
  ```
  class Solution:
      def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
          dummy = ListNode(0,head)
          ptr_r = dummy
          ptr_l = dummy
          for _ in range(n+1):
              ptr_r = ptr_r.next
          
          while ptr_r:
              ptr_r = ptr_r.next
              ptr_l = ptr_l.next
          
          ptr_l.next = ptr_l.next.next
          return dummy.next
  ```
- Time Complexity: O(n)
  The list is traversed twice (once to move ptr_r and once for both pointers together).
- Space Complexity: O(1)  
  As no additional data structures proportional to the size of the input are used.


---

## **Conclusion**
The two-pointer approach is efficient for removing the n-th node from the end of a linked list. By leveraging a dummy node, the solution ensures edge cases such as removing the head node are handled seamlessly. This method is optimal in both time and space complexity.  

### **Future Plans**
- Add more solutions using other languages like Java.
- Implement automated tests to ensure correctness across edge cases.
- Explore alternative algorithms to further optimize the performance for larger datasets.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
