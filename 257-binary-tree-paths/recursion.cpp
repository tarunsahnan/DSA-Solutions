//Question Link --> https://leetcode.com/problems/binary-tree-paths/

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
    
    void binaryTreePaths(TreeNode* root,vector<string>&res, string sofar){
        
        if(root == NULL)
            return;

        if(root!= NULL and root->left == NULL and root->right == NULL){
            sofar += to_string(root->val);
            res.push_back(sofar);
            return;
        }
        
        sofar+= to_string(root->val)+"->";
        
        binaryTreePaths(root->left,res,sofar);
        binaryTreePaths(root->right,res,sofar);

    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> res;
        binaryTreePaths(root,res,"");
        return res;
        
    }
};
