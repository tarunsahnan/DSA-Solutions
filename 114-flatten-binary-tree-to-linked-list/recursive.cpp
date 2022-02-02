//Question Link --> https://leetcode.com/problems/flatten-binary-tree-to-linked-list/submissions/

class Solution {
public:
    
    void flatten(TreeNode* root) {
        
        if(root == NULL) return;
        
        flatten(root->left);
        
        if(root->left != NULL){
            
            TreeNode* rootright=root->right;
            
            root->right =root->left;
            root->left = NULL;
            while(root->right != NULL)
                root=root->right;
            
            
            root->right=rootright;
            
        }
        
        flatten(root->right);
    }
};
