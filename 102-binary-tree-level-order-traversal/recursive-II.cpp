//Question Link --> https://leetcode.com/problems/binary-tree-level-order-traversal/

 int height(TreeNode * root){
        if(!root) return 0;
        
        return 1 + max(height(root->left),height(root->right));
    }
    
    void helper(TreeNode * root, int level,vector<int> & temp){
        
        if(!root) return;
        
        if(level == 0) {temp.push_back(root->val); return;}
        
        helper(root->left,level-1,temp);
        helper(root->right,level-1,temp);
        
    }
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> res;
        
        int h=height(root);
        
        for(int i=0;i<h;i++){
            vector<int> temp;
            helper(root,i,temp);
            res.push_back(temp);
    
        }
        
        return res;
    }
