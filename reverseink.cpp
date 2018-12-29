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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *current=head;
        ListNode *current1=head;
        ListNode *p=head;
        ListNode *prev=NULL;
        ListNode *after=NULL;
        int count=0,n;
        int l=0;
        int l1=0;
        
       
        while(current1!=NULL)
        {
            current1=current1->next;
            l1++;
         }
        if(l1<k)
        {
            return head;
          }
        while(current!=NULL && count<k)
        {
            after=current->next;
            current->next=prev;
            prev=current;
            current=after;
            count++;
        }
        while(current!=NULL)
        {
            current=current->next;
            l++;
         }
        if(after!=NULL && k<=l)
        {
            head->next=reverseKGroup(after,k);
        }
        else if(after!=NULL && k>l)
        {
            p->next=after;
            
        }    
        return prev;
        
        
      
    }
};
