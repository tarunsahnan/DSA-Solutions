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
    
    //Recursion I
//    
//  
//     vector<vector<int>> res;
//     void helper(TreeNode * root,int level){
        
//         if(!root) return;
        
//         if(res.size() == level)
//             res.push_back(vector<int>());
        
//         res[level].push_back(root->val);
        
//         helper(root->left,level+1);
//         helper(root->right,level+1);
    
//     }
    
    
//     vector<vector<int>> levelOrder(TreeNode* root) {
        
        
//         helper(root,0);
//         return res;
//     }
    
    
    
//Recurion II    
    
//     int height(TreeNode * root){
//         if(!root) return 0;
        
//         return 1 + max(height(root->left),height(root->right));
//     }
    
//     void helper(TreeNode * root, int level,vector<int> & temp){
        
//         if(!root) return;
        
//         if(level == 0) {temp.push_back(root->val); return;}
        
//         helper(root->left,level-1,temp);
//         helper(root->right,level-1,temp);
        
//     }
    
//     vector<vector<int>> levelOrder(TreeNode* root) {
        
//         vector<vector<int>> res;
        
//         int h=height(root);
        
//         for(int i=0;i<h;i++){
//             vector<int> temp;
//             helper(root,i,temp);
//             res.push_back(temp);
    
//         }
        
//         return res;
//     }    
    
    
//Iteration
    
    
    vector<vector<int>> levelOrder(TreeNode* root){
        
        if(!root) return {};
        
        vector<vector<int>> res;
        queue<TreeNode *> q;
        vector<int> temp;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            
            root=q.front();
            q.pop();
            
            if(!root){
                res.push_back(temp);
                temp.clear();                
                if(!q.empty())
                    q.push(NULL);
            }
            else{
                temp.push_back(root->val);
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            } 
        }
        
        return res;
    }
    
};
