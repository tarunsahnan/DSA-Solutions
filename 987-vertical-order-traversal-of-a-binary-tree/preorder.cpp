

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
    
    void helper(TreeNode* root, map<int,vector<pair<int,int>>>& res, int horlevel,int level){
        
        if(!root){
            return;
        }
        
        res[horlevel].push_back({level,root->val});
        
        helper(root->left,res,horlevel-1,level+1);
        helper(root->right,res,horlevel+1,level+1);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        vector<vector<int>> res;
        
        map<int,vector<pair<int,int>>> temp;
        
        helper(root,temp,0,0);
        
        for(auto i:temp){
            vector<int> temptemp;
            sort(i.second.begin(),i.second.end());
            for(auto j:i.second){
                temptemp.push_back(j.second);
            }
            res.push_back(temptemp);
        }
        return res;
    }
};
