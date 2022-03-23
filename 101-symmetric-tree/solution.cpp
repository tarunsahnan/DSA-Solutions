//OJ --> https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    
    bool helper(TreeNode* rootL, TreeNode* rootR){
        
        if(rootL==NULL and rootR==NULL){
            return true;
        }
        
        if(rootL==NULL || rootR==NULL || rootL->val != rootR->val){
            return false;
        }
        
        return helper(rootL->left, rootR->right) and helper(rootL->right, rootR->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }
};