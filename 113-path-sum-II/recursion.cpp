//Question Link --> https://leetcode.com/problems/path-sum-ii/

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
    
    bool isleaf(TreeNode* root){
        return root!=NULL and root->left==NULL and root->right==NULL;
    }
    
    void cald(TreeNode* root, int &targetSum, int sum, vector<int> substr, vector<vector<int>>& res){
        
        if(root == NULL) return;
        
        sum+=root->val;
        
        if(isleaf(root)){
            
            if(sum==targetSum){
            substr.push_back(root->val);
            res.push_back(substr);
            }
        }
        
        substr.push_back(root->val);
        
        cald(root->left,targetSum,sum,substr,res);
        cald(root->right,targetSum,sum,substr,res);
    
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
     
        vector<vector<int>> res;
        cald(root,targetSum,0,{},res);
        return res;
    }
};
