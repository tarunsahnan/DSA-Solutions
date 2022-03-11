//Question Link --> https://leetcode.com/problems/swap-nodes-in-pairs/


class Solution {
public:
    
    //swap 2 nodes
    ListNode* SWAPLL(ListNode*head){
        
        ListNode* temp=head->next;
        head->next=head->next->next;
        temp->next=head;
        cout<<temp->val<<" "<<temp->next->val<<endl;
        return temp;
    }
    
    ListNode* swapPairs(ListNode* head) {
     
        if(head == NULL || head->next==NULL) return head;
        
        //adding dummy node in front of head
        ListNode *Dummy=new ListNode(0);
        Dummy->next=head;
        head=Dummy;
        
        while(head and head->next and head->next->next){
            
            if(head->next){
                head->next=SWAPLL(head->next);
                head=head->next->next;
            }
        }
        
        return Dummy->next;
        
    }
};