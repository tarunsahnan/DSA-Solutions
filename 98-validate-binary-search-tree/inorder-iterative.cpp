//Question Link --> https://leetcode.com/problems/validate-binary-search-tree/

bool isValidBST(TreeNode* root) {
        
        vector<int> inorder;
        stack<TreeNode *> st;
        TreeNode * temp=root;
        
        while(true){
            
            while(temp){
                st.push(temp);
                temp=temp->left;
            }
            
            if(st.empty()) break;
            
            temp=st.top(), st.pop();
            
            inorder.push_back(temp->val);
            temp=temp->right;
            
        }
        
        
        for(int i=0;i<inorder.size()-1;i++)
            if(inorder[i] >= inorder[i+1]) return false;
                
        return true;
        
    }
