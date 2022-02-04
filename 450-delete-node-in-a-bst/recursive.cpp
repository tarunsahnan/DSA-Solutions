//Question Link --> https://leetcode.com/problems/delete-node-in-a-bst/

TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(root == NULL) return NULL;
        
        else if(root->val > key) root->left = deleteNode(root->left,key);
        else if(root->val < key) root->right = deleteNode(root->right,key);
        
        else if (root->val == key){
            
            //no child
            if(root -> left == NULL and root->right == NULL)
                return NULL;
            
            //only one child
            else if(!root->left || !root->right){
                if(root->left) return root->left;
                else return root->right;
            }
            
            //two child
            TreeNode * temp= root->left;
            while(temp->right) temp=temp->right;
            root->val = temp->val;
            
            root->left=deleteNode(root->left,temp->val);      
        }
        
        
        
        return root;
        
    }
