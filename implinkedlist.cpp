class MyLinkedList {
public:
    typedef struct Node{
        int val;
        Node *next;
    }NODE;
    NODE *head;
    /** Initialize your data structure here. */
    MyLinkedList() {
        head = NULL;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        NODE *current=head;
       int n=1; 
       while(current!=NULL)
       {
           current=current->next;
           n=n+1;
       } 
        
        if(index>n)
            return -1;
        current=head;
        int c=0;
        while(current!=NULL && c<index)
        {
            current=current->next;
            c=c+1;
        }
        if(current==NULL)
            return -1;
        else
            return current->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        NODE *node=(NODE *)new NODE;
        node->val=val;
        node->next=head;
        head=node;
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        NODE *node=(NODE *)new NODE;
        node->val=val;
        node->next=NULL;
        NODE *last=head;
        while(last->next!=NULL)
        {
            last=last->next;
         }
        last->next=node;
       
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index==0)
        {
           addAtHead(val);
            return;
        }
        if(head==NULL)
          return ;
        NODE * node=(NODE *) new NODE;
        node->val=val;
        node->next=NULL;
        NODE *curr=head;
        for(int i=1;i<index;i++)
        {
            curr=curr->next;
            if(curr==NULL)
                return;
        }
         node->next=curr->next;
         curr->next=node;   
        }
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
       //deal with the situation when index is equal to zero
      if(head == NULL)return;
        if(index == 0){
            //NODE *p = head;
            head = head->next;
           // delete p;
          //  p = NULL;
        }
        NODE *cur = head;
        //find the node before the node we want to delete
        for(int i = 1;i < index;i++)
        { 
            cur = cur->next;
            if(cur== NULL)
                return;
           
        }
        NODE *p = cur->next;
        if(p == NULL)return;
        cur->next = cur->next->next;
        delete p;
        p = NULL;   
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */
