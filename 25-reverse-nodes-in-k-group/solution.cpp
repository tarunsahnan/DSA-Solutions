// Question Link --> https://leetcode.com/problems/reverse-nodes-in-k-group/#:~:text=Reverse%20Nodes%20in%20k%2DGroup%20%2D%20LeetCode&text=Given%20the%20head%20of%20a,length%20of%20the%20linked%20list.

class Solution {
public:
    
    ListNode* reverse(ListNode* head, ListNode * node){
        
        ListNode *prev=node,*curr=head,*ahead=head;
        
        while(curr != node){
            
            ahead=curr->next;
            curr->next=prev;
            prev=curr;
            curr=ahead;          
        }
        
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* temp=head;
        int i=0;
        while(i<k and temp){
            i++;
            temp=temp->next;
        }
        
        if(i!=k)
            return head;
        
        ListNode* _head=reverse(head,temp);
        head->next=reverseKGroup(temp,k);     
        return _head;
    }
};
