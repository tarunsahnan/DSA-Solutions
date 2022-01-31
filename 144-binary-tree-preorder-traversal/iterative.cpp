//Question Link --> https://leetcode.com/problems/binary-tree-preorder-traversal/

 vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode *> st;
        
        TreeNode * temp=root;
        while(true){
    
            
            while(temp){
                res.push_back(temp->val);
                st.push(temp);
                temp=temp->left;
            }
            
            if(st.empty()) break;
            
            temp=st.top();
            st.pop();   
            temp=temp->right;
        }
        return res;
        
    }
