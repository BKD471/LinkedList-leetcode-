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
    ListNode* swapPairs(ListNode* head) {
        ListNode *current=head;
        ListNode *prev=NULL;
        ListNode *after=NULL;
        int count=0;
        int k=2;
        while(current!=NULL && count<k)
        {
            after=current->next;
            current->next=prev;
            prev=current;
            current=after;
            count=count+1;
        }
        if (after!=NULL)
        {
            head->next=swapPairs(after);
        }  
        
       return prev; 
    }
};
