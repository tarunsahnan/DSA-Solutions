//Question Link --> https://leetcode.com/problems/rotate-list/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(!head || k==0 || !head->next)
            return head;
        
        ListNode* slow=head, *fast=head,*temp=head;
        int size=0;
        while(temp){
            size++; temp=temp->next;
        }
        cout<<size;
        delete temp;
        k=k%size;
        
        if(k==size || k==0) return head;
        
        for(int i=0;i<k;i++)
            fast=fast->next;
        
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        
        ListNode *new_head=slow->next;
        
        slow->next=NULL;
        fast->next=head;
        
        return new_head;
        
    }
};
