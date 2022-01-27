//Question Link --> https://leetcode.com/problems/remove-duplicates-from-sorted-list/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* ptr=head;
        
        while(ptr and ptr->next){
            
            if(ptr->next->val == ptr->val)
                ptr->next=ptr->next->next;
            
            else
                ptr=ptr->next;
        }
        
        return head;   
    }
};
