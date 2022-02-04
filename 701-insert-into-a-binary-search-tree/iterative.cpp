//Question Link --> https://leetcode.com/problems/insert-into-a-binary-search-tree/

 TreeNode* insertIntoBST(TreeNode* root, int val){
        
        if(!root) return new TreeNode(val);
        
        TreeNode * temp=root;
        
        while(true){
            
            if(temp -> val < val){
                
                if(temp->right) temp=temp->right;
                else {
                    temp->right = new TreeNode(val);
                    break;
                }
                
            }
            else{
                
                if(temp->left) temp=temp->left;
                else {
                    temp->left = new TreeNode(val);
                    break;
                }
                
            }
            
        }
        return root;
    }
