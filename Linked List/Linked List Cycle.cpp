//Ouestion Link --> https://leetcode.com/problems/linked-list-cycle/


 bool hasCycle(ListNode *head) {
        
        //if head is null or only one node is present 
        if(!head or !head->next)
            return false;
        
        ListNode * slow=head, *fast=head;      
        //slow pointer will move by 1 and fast will move by 2.
        //If they meet at some point, then we can say that cycle in LL exists.
        
        while(fast)
        {
            
            slow=slow->next;
            
            if(fast->next)
                fast=fast->next->next;
            else
                break;
            
            if(slow == fast)
                return true;
            
        }
        
        return false;
    }
