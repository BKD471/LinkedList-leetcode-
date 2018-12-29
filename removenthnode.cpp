/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
 ListNode *current=head;
        ListNode *temp=head;
        int k=1;
        while(current->next!=NULL)
        {
            current=current->next;
            k=k+1;
        }
        if(n>k)
            return 0;
        
        int z=(k-n);
        if(z)
        {    
        for(int i=0;i<z-1;i++)
        {
            temp=temp->next;
            
        }
        temp->next=temp->next->next;
        }
    else
    {
       head=head->next; 
    }
        return head;
}
};
