// Question Link --> https://leetcode.com/problems/remove-nth-node-from-end-of-list/

class Solution {
public:
  
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        ListNode *slow=head,*fast=head;
        
        if(head->next == NULL)
            return NULL;
        
        for(int i=0;i<n;i++)
            fast=fast->next;
        
        if(!fast){
            
            fast=head->next;
            delete(head);
            return fast;
        }
        
        while(fast->next){
            slow=slow->next;
            fast=fast->next;           
        }
        
        fast=slow->next;
        slow->next=slow->next->next;
        
        delete(fast);
        return head;
    }
};
