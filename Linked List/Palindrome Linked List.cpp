// Question Link --> https://leetcode.com/problems/palindrome-linked-list/


class Solution {
public:
    
    
    ListNode* reverse(ListNode *slow){
        
        if(!slow || slow ->next== NULL) return slow;
        
        ListNode *temp=reverse(slow->next);
        slow->next->next =slow;
        slow->next=NULL;
        return temp;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL)
            return false;
        
        if(head->next == NULL)
            return true;
        
        ListNode *slow=head, *fast=head;
        
        while(fast){
            slow=slow->next;
            if(fast->next)
                fast=fast->next->next;
            else
                fast=fast->next;
        }
        
        ListNode* temp=reverse(slow);
        
        while(temp){
            
            if(temp->val != head->val)
                return false;
            temp=temp->next;
            head=head->next;            
        }
        
        return true;
        
        
    }
};
