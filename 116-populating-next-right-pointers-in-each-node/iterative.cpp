//Question Link --> https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

Node* connect(Node* root) {
        
        Node * prev = root, *curr;
        
        while(prev){
            
            curr=prev;
            
            while(curr != NULL and curr->left != NULL){
                curr->left->next = curr->right;
                
                if(curr->next != NULL)
                    curr->right->next = curr->next->left;
                
                curr=curr->next;
            }
            
            prev=prev->left;
            
        }
        
        return root;
    }
