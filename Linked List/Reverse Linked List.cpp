//Question Link--> https://leetcode.com/problems/reverse-linked-list/


ListNode* reverseList(ListNode* head) {
        
        //if head is NULL or only one node is present return head
        // Because reverse of single node is node itself
        if(!head  or  !head->next)
            return head;
        
        
        ListNode *prev=head, *curr=head->next, *ahead=head->next;
        
        //we will manage 3 pointers
        //prev will keep the hold of previous pointer.
        // curr is our current pointer
        // ahead is our next pointer because after making curr->next=prev, we will have no track of next node.
        
        prev->next=NULL;
        
        while(ahead!=NULL){
            
            ahead=ahead->next;      //move ahead by 1
            curr->next=prev;        //make prev node as our next node
            prev=curr;              // make current node as our prev node
            if(ahead != NULL)       //if ahead is not null increment our current by one
                curr=ahead;
        }
        
        return curr;
        
    }
