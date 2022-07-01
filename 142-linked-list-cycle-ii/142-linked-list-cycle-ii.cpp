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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode * slow=head,*fast=head;
        bool flag=false;
        while(fast and fast->next){
            
            slow=slow->next;
            fast=fast->next->next;

            if(slow == fast){
                flag=true;
                break;
        }
        }
        if(flag==false)
            return NULL;
        
        slow=head;
        
        // if(slow == fast->next)
        //     return fast->next;
        
        while(slow != fast){
            slow=slow->next;
            fast=fast->next;
        }
 
        return fast;
        

    }
};