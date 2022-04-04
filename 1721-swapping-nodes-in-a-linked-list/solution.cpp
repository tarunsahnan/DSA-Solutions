//OJ --> https://leetcode.com/problems/swapping-nodes-in-a-linked-list/

class Solution {
public:
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        if(!head) return head;
        
        ListNode* one=head,*two=head;
        
        for(int i=1;i<k;i++){
            one=one->next;
            if(!one)
                return head;
        }
        
        ListNode* temp=one;
        while(temp and temp->next){
            temp= temp->next;
            two = two->next;
        }
        
        swap(one->val,two->val);
        return head;
    }
};