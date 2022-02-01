//Question Link --> https://leetcode.com/problems/binary-tree-right-side-view/

 vector<int> rightSideView(TreeNode* root) {
        
        if(!root) return {};
        
        vector<int> res;
        vector<int> temp; 
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            
            root=q.front();
            q.pop();
            
            if(!root){
                res.push_back(temp[0]);
                temp.clear();
                if(!q.empty())
                    q.push(NULL);
            }
            else{
                temp.push_back(root->val);
                
               if(root->right)
                    q.push(root->right);
                if(root->left)
                    q.push(root->left);
            }
        }
        
        
        
        return res;   
    }
