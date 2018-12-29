class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *sh=NULL;
        ListNode *gh=NULL;
        ListNode *sl=NULL;
        ListNode *gl=NULL;
        while(head!=NULL)
        {
            
            if(head->val<x)
            {
                if(sh==NULL)
                {
                    sh=sl=head;
                }
                else
                {
                    sl->next=head;
                    sl=head;
                } 
            }
           else if(head->val>=x)
            {
                if(gh==NULL)
                {
                    gh=gl=head;
                }
                else
                {
                    gl->next=head;
                    gl=head;
                } 
            }
            head=head->next;
             
             } 
          if(gl!=NULL)
              gl->next=NULL;
          if(sh==NULL)
          {
              return gh;
          }
        if(gh==NULL)
        {
            return sh;
        } 
        sl->next=gh;
        return sh;
        
    }
};
