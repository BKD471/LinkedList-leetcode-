class Solution:
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        
        """
        current=head
        prev=None
        after=None
        while(current!=None):
            after=current.next
            current.next=prev
            prev=current
            current=after
        head=prev
        return head
            
        
