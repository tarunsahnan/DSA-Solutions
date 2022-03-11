//Quesion Link --> https://leetcode.com/problems/swap-nodes-in-pairs/


class Solution {
public:
    
    ListNode* SWAPLL(ListNode*head){
        
        ListNode* temp=head->next;
        head->next=head->next->next;
        temp->next=head;
        cout<<temp->val<<" "<<temp->next->val<<endl;
        return temp;
    }
    
    ListNode* swapPairs(ListNode* head) {
     
        if(head == NULL || head->next==NULL) return head;
        
        ListNode Dummy;
        ListNode* ptr=&Dummy;
        
        while(head and head->next){
            
            if(head->next){
                ptr->next=SWAPLL(head);
                ptr=ptr->next;
                head=head->next;
            }
            ptr=ptr->next;
            
        }
        
        return Dummy.next;;
        
    }
};