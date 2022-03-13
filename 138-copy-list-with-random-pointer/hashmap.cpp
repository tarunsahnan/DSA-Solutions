//Question Link --> https://leetcode.com/problems/copy-list-with-random-pointer/


class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        
        map<Node*,Node*> hash;
        
        Node* temp=head;
        while(temp){
            hash[temp]=new Node(temp->val);
            temp=temp->next;
        }

        temp=head;
        
        while(head){
            hash[head]->next=hash[head->next];
            hash[head]->random=hash[head->random];
            head=head->next;
        }
        return hash[temp];
    }
};