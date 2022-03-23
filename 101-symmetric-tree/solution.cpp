//OJ --> https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    
    bool helper(TreeNode* rootL, TreeNode* rootR){
        
        if(rootL==NULL and rootR==NULL){
            return true;
        }
        
        if(rootL==NULL || rootR==NULL){
            return false;
        }
        
        if(rootL->val == rootR->val)
            return ((helper(rootL->left, rootR->right)) and (helper(rootL->right, rootR->left)));
        
        return false;
        
    }
    
    bool isSymmetric(TreeNode* root) {
        
        if(!root==NULL)
            return true;
        
        return helper(root->left,root->right);
    }
};