class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
    
        ListNode* pA=headA;
        ListNode* pB=headB;
        while(true){
            if(pA==NULL && pB==NULL) break;
            if(pA==pB) return pA;
            pA=(pA==NULL)?headB:pA->next;
            pB=(pB==NULL)?headA:pB->next;                
        }
       return NULL;
    }  
};
