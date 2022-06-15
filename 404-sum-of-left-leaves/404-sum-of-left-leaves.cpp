/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root, bool left=false) {
        
        if(root ==NULL)
            return 0;
        if(root->left == NULL and root->right==NULL and left)
              return root->val;
        return sumOfLeftLeaves(root->left,true) + sumOfLeftLeaves(root->right,false);
        
        
    }
};