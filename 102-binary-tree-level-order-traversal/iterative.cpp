//Question Link --> https://leetcode.com/problems/binary-tree-level-order-traversal/

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
