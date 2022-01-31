//Question Link --> https://leetcode.com/problems/binary-tree-inorder-traversal/

 vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode *> st;
        TreeNode * temp=root;
        
        while(true){
            
            while(temp){
                st.push(temp);
                temp=temp->left;
            }
            
            if(st.empty()) break;
            
            temp=st.top();
            st.pop();
            res.push_back(temp->val);
            temp=temp->right;
            
        }
        
        return res;
    }
