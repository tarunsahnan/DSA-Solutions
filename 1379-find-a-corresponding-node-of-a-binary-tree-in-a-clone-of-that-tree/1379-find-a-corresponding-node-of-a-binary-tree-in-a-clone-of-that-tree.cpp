/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original == target){
            return cloned;
        }
        
        if(original == NULL)
            return NULL;
        TreeNode* left=getTargetCopy(original->left, cloned->left, target);
        if(left != NULL){
            return left;
        }
        return getTargetCopy(original->right, cloned->right, target);
            
    }
};