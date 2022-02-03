//Question Link --> https://leetcode.com/problems/cousins-in-binary-tree/

 void cousin(TreeNode* root, unordered_map<int,pair<int,int>>& hash,int level){
        
        if(root == NULL) return;
        
        if(root->left != NULL){
            hash[root->left->val] = {level+1,root->val};
            cousin(root->left,hash,level+1);
        }
        
        if(root->right != NULL){
            hash[root->right->val] = make_pair(level+1,root->val);
            cousin(root->right,hash,level+1);
        }
        
        
    }
    
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        unordered_map<int,pair<int,int>> hash;  // node val -> {level, parent val}
        
        cousin(root,hash,0);
        
        if(hash[x].first == hash[y].first    and hash[x].second != hash[y].second)
            return true;
        return false;
        
    }
