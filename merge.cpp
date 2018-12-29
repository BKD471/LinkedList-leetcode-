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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *a=l1;
        ListNode *b=l2;
        ListNode *res=NULL;
        if(a==NULL)
            return b;
        if(b==NULL)
            return a;
        if(a->val<=b->val)
        {
            res=a;
            res->next=mergeTwoLists(a->next,b);
        }
        else
        {
            res=b;
            res->next=mergeTwoLists(a,b->next);
        }    
         return res;   
        
    }
};
