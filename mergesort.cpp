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
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        //divide the list into two parts 
        fast = slow->next;
        slow->next = NULL;
        
        return merge(sortList(head), sortList(fast));
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
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
            res->next=merge(a->next,b);
        }
        else
        {
            res=b;
            res->next=merge(a,b->next);
        }    
         return res;  
    }
};
