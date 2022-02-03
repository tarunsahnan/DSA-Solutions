//Question Link --> 958-check-completeness-of-a-binary-tree

 bool isCompleteTree(TreeNode* root) {
        
        if(root == NULL) return false;
        
        bool null_mila = false;
        queue<TreeNode*> q;
        
        q.push(root);
        while( ! q.empty()){
            
            root=q.front(); q.pop();
            
            if(root == NULL)
                null_mila = true;
            
            else
            {
                if(null_mila == true) return false;
                
                q.push(root->left);
                q.push(root->right);
            }
        }
        
        return true;
    }
