//Question Link --> https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(!head || !head->next)
            return head;
        
        int val=head->val;
        
        if(head->val ==head->next->val){
            while(head and head->val == val)
                head=head->next;
            return deleteDuplicates(head);
        }
        
        head->next=deleteDuplicates(head->next);
        return head;
    }
};
