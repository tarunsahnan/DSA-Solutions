//Question Link--> https://leetcode.com/problems/linked-list-cycle-ii/

// Using fast and slow pointer we can detect the presence of cycle in the LL because if there is cycle then these 2 pointer will meet for sure.
// Then we will make slow pointer a head and we will increment both fast and slow by one.
// The point at which they meet is the first node of cycle.
// We will return fast pointer.


ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow=head, *fast=head;
        bool flag=false;
  
        while(fast and fast->next){
            
            slow=slow->next;  //increment slow pointer by 1
            fast=fast->next->next;  //increment fast pointer by 2

            if(slow == fast){      //if both point to same address break the loop, this confirms the presence of cycle
                flag=true;
                break;
        }
        }
      
        //if cycle not found return NULL
        if(flag==false)
            return NULL;
        
        slow=head;
        
        //if head is the first node of cycle
        if(slow == fast->next)
            return fast->next;
        
        while(slow != fast){
            slow=slow->next;
            fast=fast->next;
        }
 
        return fast;
        

    }
