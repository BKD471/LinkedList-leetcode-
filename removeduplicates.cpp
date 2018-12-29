class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current;
        ListNode *after;
        if(head==NULL)
            return 0;
        after=head->next;
        if(after==NULL)
            return head;
        while(head->val==after->val)
        {
            head=after;
            after=head->next;
            if(head==NULL || after==NULL)
            {
                return head;
            }
        }   
        current=head;
        if(after==NULL)
            return head;
        while(current!=NULL)
        {    
          if(current->val==after->val)
          {
            current->next=after->next;
            after=current->next; 
              if( after==NULL)
             {
                 return head;
             }
           }
           else
           {   
            current=current->next;
            after=current->next; 
             if( after==NULL)
             {
                 return head;
             }
           }  
           }  
            
           return head; 
           
          
        
        
    }
};
