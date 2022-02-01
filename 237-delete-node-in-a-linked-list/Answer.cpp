//Question Link --> https://leetcode.com/problems/delete-node-in-a-linked-list/

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode * temp=node,*ptr;
        
        while(temp->next){
            temp->val=temp->next->val;
            temp->next=temp->next;
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=NULL;
    }
};
