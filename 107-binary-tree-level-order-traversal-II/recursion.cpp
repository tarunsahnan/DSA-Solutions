//Question Link --> https://leetcode.com/problems/binary-tree-level-order-traversal-ii/

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

        
    int height(TreeNode * root){
        
        if(!root) return 0;
        
        return 1+max(height(root->left),height(root->right));
    }
        
    void helper(TreeNode* root, int level, vector<int>& temp){
        
        if(!root) return;
        
        if(level == 0){
            temp.push_back(root->val);
            return;
        }
        helper(root->left,level-1,temp);
        helper(root->right,level-1,temp);
        
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
         vector<vector<int>> res;
        
        for(int i=height(root)-1;i>=0;i--){
            
            vector<int> temp;
            helper(root,i,temp);
            res.push_back(temp);
            
        }
        return res;
    }
};
