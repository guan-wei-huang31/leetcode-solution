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
### **Three-Pointer Approach (C++)**
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
  
---

## **Conclusion**
This Two-Pointer approach efficiently reverses a linked list with a linear time complexity and constant space usage. It is simple to implement and suitable for most use cases. 

### **Future Plans**
- Add more solutions using other languages like Python and Java.
- Implement automated tests to ensure correctness across edge cases.
- Explore alternative algorithms to further optimize the performance for larger datasets.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
