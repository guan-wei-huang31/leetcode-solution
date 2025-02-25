# **Remove Duplicates from Sorted List**

## **Problem Statement**
Given the head of a sorted linked list, remove all duplicate nodes such that each element appears only once. Return the modified linked list.  

**Example Input:**
  ```
  Input: head = [1,1,2,3,3]
  Output: head = [1,2,3]
  ```
---

## **Solutions Overview**
### **Iterative Approach (Python)**
This solution iterates through the linked list and removes duplicate nodes by modifying the next pointer of each node. Since the list is already sorted, adjacent duplicate values can be directly skipped.

Steps:
  1. Initialize dummy to store the reference to the head.
  2. Traverse the list while ensuring head and head.next are not None.
     - If the current node's value is the same as the next node's value, update head.next to skip the duplicate.
     - If the values are different, move head to the next node.
  3. Return the modified list starting from dummy. 

- Language: Python
- Code:
  ```
  class Solution:
      def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
          dummy = head
          while(head and head.next):
              if head.val == head.next.val:
                  head.next = head.next.next
              else: 
                  head = head.next
          
          return dummy
  ```
- Time Complexity: O(n)
  The algorithm iterates through the list once, making it linear in complexity.
- Space Complexity: O(1)  
  The solution modifies the linked list in place without requiring additional memory.

---

## **Conclusion**
The iterative approach efficiently removes duplicates from a sorted linked list while preserving the original order. It operates in O(n) time and requires O(1) space, making it an optimal solution.  

### **Future Plans**
- Add more solutions using other languages like Java.
- Implement a recursive version of the algorithm for comparison.
- Extend the solution to remove all occurrences of duplicates (not just consecutive ones).

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
