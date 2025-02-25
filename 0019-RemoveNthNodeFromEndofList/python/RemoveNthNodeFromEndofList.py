# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
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