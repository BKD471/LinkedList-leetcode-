class Solution(object):
    def insertionSortList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        helper= ListNode(None)
        helper.next = head
        
        while head and head.next:
            if head.next.val > head.val:
                head = head.next
                continue
            
            cur = head.next #the node needs to be inserted
            head.next = head.next.next
            
            #find the inserting position
            pre = helper
            while pre.next and pre.next.val<cur.val:
                pre = pre.next
            
            # inserting node
            cur.next = pre.next
            pre.next = cur

        return helper.next
