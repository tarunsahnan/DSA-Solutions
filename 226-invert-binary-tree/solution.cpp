//OJ --> https://leetcode.com/problems/invert-binary-tree/

class Solution {
public:
    
    TreeNode* invertTree(TreeNode* root) {
        
        if(!root)
            return NULL;
        
        TreeNode* left= invertTree(root->left);
        TreeNode* right= invertTree(root->right);        
        
        root->left = right;
        root->right = left;
        
        return root;
        
    }
};
