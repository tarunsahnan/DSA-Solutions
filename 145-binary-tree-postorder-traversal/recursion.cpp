//Question Link --> https://leetcode.com/problems/binary-tree-postorder-traversal/

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
    
    void helper(TreeNode * root, vector<int>& res){
        
        if(!root) return;
        
        helper(root->left,res);
        helper(root->right,res);
        
        res.push_back(root->val);         
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> res;
        helper(root,res);
        return res;
    }
};
