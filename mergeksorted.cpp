struct ListNode* merge(struct ListNode* a,struct ListNode* b)
{
    
    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    struct ListNode *res=NULL;
    if(a->val<=b->val)
    {
        res=a;
        res->next=merge(a->next,b);
        //return a;
    }
    else
    {
        res=b;
        res->next=merge(a,b->next);
        //return b;
    }   
    return res;
}   
struct ListNode* mergeKLists(struct ListNode** lists, int listsSize)
{
	if (listsSize == 0) return NULL;
	int i, k, n = listsSize;
	while (n > 1)
	{
		k = 0;
		for (i = 0; i < n - 1; i+=2)
			lists[k++] =  merge(lists[i], lists[i + 1]);
        if(i == n - 1) lists[k++] = lists[i];
		n = k;
	}
	return lists[0];
}
