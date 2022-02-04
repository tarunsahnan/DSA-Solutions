//Question Link --> https://leetcode.com/problems/insert-into-a-binary-search-tree/

 TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if(root == NULL) return new TreeNode(val);
        
        if(root->val > val)
            root->left = insertIntoBST (root->left,val);
        
        else
            root->right = insertIntoBST (root->right,val);
        
        return root;
    }
