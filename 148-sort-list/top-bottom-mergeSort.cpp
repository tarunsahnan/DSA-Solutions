//OJ --> https://leetcode.com/problems/sort-list/

class Solution {
public:
        
    ListNode* sortList(ListNode* head) {
            
        if(head == NULL || head ->next == NULL)
            return head;
        
        ListNode* slow=head,*fast=head,*temp=NULL;
        
        //find middle node
        while(fast and fast->next){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;

        ListNode* l1=sortList(head);
        ListNode* l2=sortList(slow);
        
        return mergeList(l1, l2);
    }
    
    ListNode* mergeList(ListNode* l1, ListNode* l2){
        
        ListNode Dummy(0);
        ListNode* itr=&Dummy;
        
        while(l1 and l2){
            if(l1->val < l2->val){
                itr->next= l1;
                l1=l1->next;
            }
            else{
                itr->next = l2;
                l2=l2->next;
            }
            itr=itr->next;
        }
        
        while(l1){
            itr->next= l1;
            l1=l1->next;
            itr=itr->next;
        }
        while(l2){
            itr->next=l2;
            l2=l2->next;
            itr=itr->next;
        }
        return Dummy.next;
        
    }
    
};  

