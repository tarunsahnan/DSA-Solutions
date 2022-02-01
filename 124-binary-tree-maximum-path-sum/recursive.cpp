//Question Link --> https://leetcode.com/problems/binary-tree-maximum-path-sum/

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
    

    int helper(TreeNode* root, int& maxsum){
        
        if(!root) return 0; 
        
        int lsum= helper(root->left,maxsum);
        int rsum= helper(root->right,maxsum);
        
        int temp=max(root->val, root->val+max(lsum,rsum));
        maxsum=max(maxsum,max(temp,root->val+lsum+rsum));
        
        return temp;
    }
    
    int maxPathSum(TreeNode* root) {
        int maxsum=INT_MIN;
        
        helper(root,maxsum);
        return maxsum;
        
        
        
    }
};
