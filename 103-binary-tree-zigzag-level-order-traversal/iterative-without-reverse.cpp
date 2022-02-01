//Question Link --> https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        if(!root) return {};
        
        vector<vector<int>> res;
        vector<int> curr;
        
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        
        int level=-1;

        while(!q.empty()){
            
            root=q.front();
            q.pop();
            
            if(!root){
                
                ++level;
                
                res.push_back(curr);
                curr.clear();
                
                if(!q.empty()) q.push(NULL);
            }
            
            else{
                
                curr.push_back(root->val);
                
                if(level%2 !=0){
                
                    if(root->right) q.push(root->right);
                    if(root->left) q.push(root->left);
                }
                else{
                    
                    if(root->left) q.push(root->left);
                    if(root->right) q.push(root->right);
                }
            }
            
        }
        
        return res;
    }
