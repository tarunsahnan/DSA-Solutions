//Question Link --> https://leetcode.com/problems/copy-list-with-random-pointer/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(!head)
            return head;
        
        Node* l1=head,*temp;
        
        while(l1){
            Node* temp= new Node(l1->val);
            temp->next = l1->next;
            l1->next = temp;
            l1 = l1->next->next;
        }
        
        Node *new_head=head->next;
        
        l1=head;
        while(l1){
            if(l1->random){
                l1->next->random = l1->random->next;
            }
            l1=l1->next->next;
        }
        
        l1=head;
        while(l1 and l1->next){
             
            temp=l1->next;
            l1->next = temp->next;
            if(temp->next)
                temp->next = temp->next->next;
            l1=l1->next;
            
        }
        
        return new_head;
        
    }
};
