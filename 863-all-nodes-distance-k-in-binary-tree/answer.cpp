//Question Link --> https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree/

 vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        if(k==0) return {target->val};
        
        unordered_map<int,TreeNode *> hashmap; //child node value, parent node
        unordered_map<int,bool> visited;
        
        queue<TreeNode* > q;
        q.push(root);
        
        TreeNode* temp=root;
        
        while(!q.empty()){      //add values to hashmap
            
            temp=q.front();
            q.pop();
            
            if(temp->left != NULL){
                q.push(temp->left);
                hashmap[temp->left->val] = temp;
            }
            
            if(temp->right != NULL){
                q.push(temp->right);
                hashmap[temp->right->val] = temp;
            } 
        }
        
        q.push(target);
        visited[target->val]=true;
        while(true){
            
            k--;
            int n=q.size();
            
            for(int i=0;i<n;i++){
            
                TreeNode* top=q.front(); q.pop();
                
                if(top->left != NULL and visited[top->left->val] == false){
                    
                    q.push(top->left); visited[top->left->val]=true;
                    
                }
                
                if(top->right != NULL and visited[top->right->val] == false){
                    q.push(top->right); visited[top->right->val] = true;
                }
                
                if(hashmap[top->val] != NULL and visited[hashmap[top->val]->val] == false){
                    q.push(hashmap[top->val]); visited[hashmap[top->val]->val]=true;
                } 
            }                    
            if(k==0) break;
            
        }
        
        vector<int> res;
        while(!q.empty()){
            res.push_back(q.front()->val);
            q.pop();
        }
        
        return res;
        
    }
