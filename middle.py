# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        fast=head
        slow=head
        while(fast!=None and fast.next!=None):
            slow=slow.next
            fast=fast.next.next
        l=[]
        while(slow!=None):
            l.append(slow.val)
            slow=slow.next
        return l
