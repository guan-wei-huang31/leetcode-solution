# **Design Linked List**

## **Problem Statement**
Design a singly linked list with the following functionalities:  
 - Retrieve a value by index.  
 - Add a node at the head.  
 - Add a node at the tail.  
 - Insert a node at a specific index.  
 - Delete a node by index.  
 - The linked list should be implemented in C++ with efficient operations and minimal memory usage.  
 
## **Features**
1. Get Value by Index: Returns the value at a specified index, or -1 if the index is out of bounds.
2. Add at Head: Adds a node with the specified value at the head of the list.
3. Add at Tail: Appends a node with the specified value to the end of the list.
4. Add at Index: Inserts a node at the specified index.
5. Delete by Index: Removes a node at the specified index.
6. Print Linked List: Outputs the entire linked list for debugging.

---
## **Solutions Overview**
### **C++ Implementation**
This solution creates a custom MyLinkedList class with a nested LinkedNode struct to represent each node in the linked list. A dummy node is used to simplify operations, and the class maintains the size of the list for validation checks.  

- Language: C++
- Code:
  ```
  class MyLinkedList {
  private:
      struct LinkedNode {
          int val;
          LinkedNode* next;
          LinkedNode(int val):val(val), next(nullptr){};
      };
      LinkedNode* _dummy;
      int _size;
  
  public:
      MyLinkedList() {
          _dummy = new LinkedNode(0);
          _size = 0;
      }
  
      int get(int index) {
          if (index < 0 || index >= _size) {
              return -1;
          }
          LinkedNode* pos = _dummy->next;
          while (index--) {
              pos = pos->next;
          }
          return pos->val;
      }
  
      void addAtHead(int val) {
          LinkedNode* newNode = new LinkedNode(val);
          newNode->next = _dummy->next;
          _dummy->next = newNode;
          _size++;
      }
  
      void addAtTail(int val) {
          LinkedNode* tailNode = new LinkedNode(val);
          LinkedNode* pos = _dummy;
          while (pos->next != nullptr) {
              pos = pos->next;
          }
          pos->next = tailNode;
          _size++;
      }
  
      void addAtIndex(int index, int val) {
          if (index > _size) {
              return;
          }
          LinkedNode* newNode = new LinkedNode(val);
          LinkedNode* pos = _dummy;
          while (index--) {
              pos = pos->next;
          }
          newNode->next = pos->next;
          pos->next = newNode;
          _size++;
      }
  
      void deleteAtIndex(int index) {
          if (index >= _size || index < 0) {
              return;
          }
          LinkedNode* cur = _dummy;
          while (index--) {
              cur = cur->next;
          }
          LinkedNode* tmp = cur->next;
          cur->next = cur->next->next;
          delete tmp;
          tmp = nullptr;
          _size--;
      }
  }
  ```
- Time Complexity:
  - get, addAtIndex, deleteAtIndex: O(n) (due to traversal).  
  - addAtHead, addAtTail: O(n) (tail traversal for addAtTail).  
- Space Complexity: O(1) (in-place operations).  

---

### **Future Plans**
- Add more solutions using other languages like Python and Java.
- Implement automated tests to ensure correctness across edge cases.
- Explore alternative algorithms to further optimize the performance for larger datasets.

### **Contact**
For questions or suggestions, feel free to contact:  
Email: gwhuang24@gmail.com
