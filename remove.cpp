class Solution {
public:
    ListNode* removeElements(ListNode* head, int v) {
        ListNode *current;
        ListNode *prev;
        if(head==NULL)
            return 0;
        while(head->val==v)
        {
            head=head->next;
             if(head==NULL)
            {
              return 0;  
            } 
        }
        current=head;
        prev=head;
        while(current!=NULL)
        {
            if(current->val==v)
            {
               prev->next=current->next;
            }
            else
            {
                prev=current;
            }
            current=current->next;
        }    
        
       return head; 
    }
};
