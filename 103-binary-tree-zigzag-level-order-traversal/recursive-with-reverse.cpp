Question Link --> https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
  
   int height(TreeNode* root){
        
        if(!root) return 0;
        
        return 1+max(height(root->left),height(root->right));
        
    }
    
    
    void  levelorder(TreeNode * root, int level, vector<int>& curr){
        
        if(!root) return;
        
        if(level == 0) {curr.push_back(root->val); return;}
        
        levelorder(root->left,level-1,curr);
        levelorder(root->right,level-1,curr);
        
    }
    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root){
        vector<vector<int>> res;
        vector<int> curr;
        
        for(int i=0;i<height(root);i++){
            
            curr.clear();
            
            levelorder(root,i,curr);
            
            if(i%2 != 0)    reverse(curr.begin(),curr.end());
            
            res.push_back(curr);
            
        }
        
        return res;     
        
    }
