//Question Link --> https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/

 TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root == NULL) return NULL;
        
        if(root==p || root==q || root==NULL) return root;
        
        TreeNode* leftSubTreeCheck = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightSubTreeCheck = lowestCommonAncestor(root->right, p, q);
        
        if(leftSubTreeCheck != NULL  and rightSubTreeCheck != NULL)
            return root;
        
        if(leftSubTreeCheck != NULL)
            return leftSubTreeCheck;
        else
            return rightSubTreeCheck;
        
    }
