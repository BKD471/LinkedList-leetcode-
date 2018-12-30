class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd=head;
        if (odd==NULL)
             return 0;
        ListNode *even=head->next;
        ListNode *evenfirst=even;
        while(1)
        {
            if(!odd || !even || !even->next)
            {
                odd->next=evenfirst;
                break;
            }  
            odd->next=even->next;
            odd=even->next;
            if(odd->next==NULL)
            {
                even->next=NULL;
                odd->next=evenfirst;
                break;
            }    
            even->next=odd->next;
            even=odd->next;
            
            
        }    
        return head;
    }
};
