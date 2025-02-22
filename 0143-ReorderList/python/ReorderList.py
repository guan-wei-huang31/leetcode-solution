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

        

