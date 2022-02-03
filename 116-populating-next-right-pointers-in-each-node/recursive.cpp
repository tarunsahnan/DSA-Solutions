//Question Link --> https://leetcode.com/problems/populating-next-right-pointers-in-each-node/

 Node* connect(Node* root) {
        
        if (root == NULL) return NULL;
        
        if(root ->left != NULL) root->left->next = root->right;
        
        if(root->next != NULL and root->right != NULL) root->right->next = root->next->left;
        
        connect(root->left);
        connect(root->right);
            
        return root;
    }
