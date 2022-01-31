//Question Link --> https://leetcode.com/problems/binary-tree-postorder-traversal/

vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> res;
        
        stack<TreeNode *> st;
        TreeNode * temp=root;
        
        while(true){
                        
            while(temp){
                res.push_back(temp->val);
                st.push(temp);
                temp=temp->right;            
            }
            
            if(st.empty()) break;
            
            temp=st.top();
            st.pop();
            temp=temp->left;
            
            
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
