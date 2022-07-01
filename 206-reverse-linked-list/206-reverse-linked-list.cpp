/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL) return head;
        
        ListNode* curr=head, *forw=head->next,*prev=NULL;
        
        while(curr != NULL){
            
            curr->next=prev;
            prev=curr;
            curr=forw;
            if(forw)
                forw=forw->next;
            
        }
        
        return prev;
        
    }
};