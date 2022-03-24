//OJ --> https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
https://assets.leetcode.com/uploads/2018/12/14/binarysearchtree_improved.png *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(!root) return NULL;
        
        if(root->val >p->val and root->val > q->val)
            return lowestCommonAncestor(root->left,p,q);
        else if(root->val < p->val  and root->val < q->val)
            return lowestCommonAncestor(root->right,p,q);
        
        return root;
        
        
    }
};