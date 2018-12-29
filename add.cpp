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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0,carry=0;
        ListNode *first=l1;
        ListNode *second=l2;
        ListNode *temp=NULL;
        ListNode *res=NULL;
        ListNode *prev=NULL;
        ListNode *p;
        while(first!=NULL || second!=NULL)
        {
            sum=carry+(first?first->val:0)+(second?second->val:0);
            carry=(sum>=10)?1:0;
            sum=sum%10;
           /* ListNode* */temp = new ListNode(sum);
            if(res==NULL)
                res=temp;
            else
                prev->next=temp;
            prev=temp;
            if(first) first=first->next;
            if(second) second=second->next;
            
            
        } 
        if(carry>0)
        {
             
          temp->next=new ListNode(carry);
         }
        return res;
        
    }
};
