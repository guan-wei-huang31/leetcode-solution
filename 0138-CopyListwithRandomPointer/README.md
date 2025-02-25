# **Copy List with Random Pointer**

## **Problem Statement**
Given a linked list where each node contains an additional random pointer that could point to any node in the list or null, create a **deep copy** of the list. Each new node should have the same value, next pointer, and random pointer configuration as its corresponding node in the original list.  

**Example Input:**
  ```
  Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
  Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]
  ```
---

## **Solutions Overview**
### **Hash Map Approach (Python)**
- This solution uses a hash map to create a deep copy of the linked list that includes random pointers. The method involves two main passes through the original list:
   1. Node Creation:
      - In the first pass, each node in the original list is mapped to a newly created node (with the same value) using a hash map. This step ensures that every node has a corresponding copy.
   2. Assigning Pointers:
      - In the second pass, the next and random pointers of each new node are set by referring to the hash map, which allows direct access to the corresponding copied nodes.  

- Language: Python
- Code:
  ```
  class Solution:
      def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
          if not head:
              return None
          
          hash_map = {}
          curr = head
          while curr:
              hash_map[curr] = Node(curr.val)
              curr = curr.next
          curr = head
          while curr:
              if curr.next:
                  hash_map[curr].next = hash_map[curr.next]
              if curr.random:
                  hash_map[curr].random = hash_map[curr.random]
              curr = curr.next
          return hash_map[head]
  ```
- Time Complexity: O(n)
  The list is traversed twice: once for node creation and once for pointer assignment.
- Space Complexity: O(n)  
  A hash map is used to store the mapping from original nodes to their copies.

---

## **Conclusion**
The hash map approach offers a clear and straightforward solution for creating a deep copy of a linked list with random pointers. Although it requires extra space proportional to the number of nodes in the list, this method simplifies the problem by handling the complexities of random pointer assignments effectively.  

### **Future Plans**
- Add more solutions using other languages like Java.
- Explore alternative approaches, such as interweaving the original and copied nodes, to reduce space usage.
- Optimize performance for extremely large linked lists.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
