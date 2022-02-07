// Question Link --> https://leetcode.com/problems/odd-even-linked-list/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(!head || !head->next) return head;
        
        ListNode *odd=head,*even=head->next,*evenstart=head->next;
        
        while(odd->next and even->next){
            
            odd->next=even->next;
            even->next=odd->next->next;
            odd=odd->next;
            even=even->next;
            
        }
        
        odd->next=evenstart;
        
        return head;
        
    }
};
