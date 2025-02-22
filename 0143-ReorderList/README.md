# **Reorder List**

## **Problem Statement**
Given a singly linked list head, reorder it in-place such that the nodes appear in the following order:
1. The first node
2. The last node
3. The second node
4. The second-last node
5. The third node, and so on...

**Example Input:**
  ```
  Input: head = [1,2,3,4]
  Output: [1,4,2,3]
  ```
---

## **Solutions Overview**
### **Three-Step Approach (Python)**
This solution reorders the linked list in three steps:

1. Find the middle of the list using the slow and fast pointer technique.
   - slow moves one step at a time.
   - fast moves two steps at a time.
   - When fast reaches the end, slow will be at the middle node.
2. Reverse the second half of the linked list.
   - Traverse from slow.next and reverse the order of nodes.
   - The original second half [4, 5] becomes [5, 4].
3. Merge the first and second halves in an alternating pattern.
   - Take one node from the first half, then one from the second half, and repeat.
 
- Language: Python
- Code:
  ```
  # Definition for singly-linked list.
  # class ListNode:
  #     def __init__(self, val=0, next=None):
  #         self.val = val
  #         self.next = next
  class Solution:
      def reorderList(self, head: Optional[ListNode]) -> None:
          """
          Do not return anything, modify head in-place instead.
          """
          # find middle point, use fast/slow pointer
          slow, fast = head, head
          while fast and fast.next:
              slow = slow.next
              fast = fast.next.next
          
          # reverse second part
          second = slow.next
          slow.next = None
          node = None
          while second:
              temp = second.next
              second.next = node
              node = second
              second = temp
          # merge 2 linked list 
          first = head
          while node:
              temp1, temp2 = first.next, node.next
              first.next, node.next = node, temp1
              first, node = temp1, temp2
  ```
- Time Complexity: O(n)  
  1. Finding the middle: O(n)
  2. Reversing the second half: O(n)
  3. Merging the two halves: O(n)
  4. Total: O(n)
- Space Complexity: O(1) 
  The algorithm modifies the lists in-place. 
  
---

## **Conclusion**
This problem is efficiently solved using three main steps:
- Find the middle using two pointers.
- Reverse the second half of the linked list.
- Merge the two halves in an alternating order.
The solution is optimal, runs in O(n) time, and modifies the list in-place with O(1) space.  

### **Future Plans**
- Add more solutions using other languages like Python and Java.
- Extend the approach to handle doubly linked lists.
- Provide test cases for edge scenarios like even-length lists and single-node lists.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
