#include <iostream>
#include<vector>
using namespace std;
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
        if (index < 0 || index > (_size - 1)){
            return -1;
        }
        LinkedNode* pos = _dummy->next;
        while(index--){
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
        while(pos->next != nullptr){
            pos = pos->next;
        }
        pos->next = tailNode;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > _size){
            return;
        }
        LinkedNode* newNode = new LinkedNode(val);
        LinkedNode* pos = _dummy;
        while(index--){
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
        while(index--) {
            cur = cur ->next;
        }
        LinkedNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        tmp=nullptr;
        _size--;
    }
	void printLinkedList() {
        LinkedNode* cur = _dummy->next;
        while (cur != nullptr) {
            cout << cur->val << " -> ";
            cur = cur->next;
        }
        cout << "nullptr" << endl;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
 
 int main() {
    MyLinkedList* obj = new MyLinkedList();

    // Test addAtHead
    cout << "Add at head: 1" << endl;
    obj->addAtHead(1);
    obj->printLinkedList();

    // Test addAtTail
    cout << "Add at tail: 3" << endl;
    obj->addAtTail(3);
    obj->printLinkedList(); //1 -> 3 -> nullptr

    // Test addAtIndex
    cout << "Add at index 1: 2" << endl;
    obj->addAtIndex(1, 2);
    obj->printLinkedList(); //1 -> 2 -> 3 -> nullptr

    // Test get
    cout << "Get index 1: " << obj->get(1) << endl;
    cout << "Get index 0: " << obj->get(0) << endl;
    cout << "Get index 2: " << obj->get(2) << endl;
    cout << "Get index 3 (out of bounds): " << obj->get(3) << endl;

    // Test deleteAtIndex
    cout << "Delete at index 1" << endl;
    obj->deleteAtIndex(1);
    obj->printLinkedList();

    cout << "Delete at index 0" << endl;
    obj->deleteAtIndex(0);
    obj->printLinkedList(); // 3 -> nullptr

    cout << "Delete at index 0" << endl;
    obj->deleteAtIndex(0);
    obj->printLinkedList(); // nullptr

    delete obj; 

    return 0;
}