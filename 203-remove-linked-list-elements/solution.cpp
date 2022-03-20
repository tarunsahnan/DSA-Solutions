//OJ --> https://leetcode.com/problems/remove-linked-list-elements/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL) return head;
        if(head->next == NULL and head->val == val)
            return NULL;
        
        if(head->next == nullptr)
            return head;
        
        ListNode Dummy;
        ListNode* itr=&Dummy;
        
        while(head){
            if(head->val != val ){
                ListNode* temp=new ListNode(head->val);
                itr->next=temp;
                itr=itr->next;
            }
            head=head->next;
        }
        if(itr)
            return Dummy.next;
        
        return NULL;
    }
};