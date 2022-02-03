//Question Link --> https://leetcode.com/problems/validate-binary-search-tree/

bool helper(TreeNode* root, TreeNode* minn, TreeNode* maxx){
        
        if(root == nullptr) return true;
        
        if((minn and minn->val >= root->val)  ||  (maxx and maxx->val <= root->val)) 
            return false;
        
        return helper(root->left,minn,root) and helper(root->right,root,maxx);
        
    }
    
    bool isValidBST(TreeNode* root) {
        
        return helper(root, NULL, NULL);
    }
