//Question Link --> https://leetcode.com/problems/path-sum/

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
    
    bool is_leaf(TreeNode *root){
        
        return (root != NULL) && (root->left == NULL) && (root->right ==NULL);
        
    }
    
    bool calcsum(TreeNode* root, int &targetSum,int sum){
        
        if(root == NULL) return false;
        
        sum+=root->val;
        
        if(is_leaf(root)){
            if(sum == targetSum) return true;
        }
        

        return calcsum(root->left,targetSum,sum) || calcsum(root->right,targetSum,sum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        
        return calcsum(root,targetSum,0);
    }
};
