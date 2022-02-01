//Question Link --> https://leetcode.com/problems/binary-tree-right-side-view/

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
    
    void levelOrderFromRightSide(TreeNode * root,int level, vector<int>& temp){
        
        if(!root) return;
        
        if(level == 0) { temp.push_back(root->val); return; }
        
        levelOrderFromRightSide(root->right,level-1,temp);
        levelOrderFromRightSide(root->left,level-1,temp);
    
    }
    
    vector<int> rightSideView(TreeNode* root) {
        
        if(!root) return {};
        
        vector<int> res;
        vector<int> temp;
        
        for(int i=0;i<height(root);i++){
            
            temp.clear();
            levelOrderFromRightSide(root,i,temp);
            res.push_back(temp[0]);
            
            for(auto i:temp)
                cout<<i;
            
        }
        
        return res;
        
    }
};
