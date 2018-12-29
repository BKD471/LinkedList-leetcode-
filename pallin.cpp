#include<bits/stdc++.h>
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
    bool check(string str)
    {
        int n=str.length();
        for(int i=0;i<n/2;i++)
        {
            if(str[i]!=str[n-i-1])
            {
                return false;
            }
        }
        return true;
        
    }
    bool isPalindrome(ListNode* head) {
        string str="";
        ListNode *current=head;
        while(current!=NULL)
        {
            str.push_back(current->val);
            current=current->next;
        }
        return check(str);
        
    }
};
