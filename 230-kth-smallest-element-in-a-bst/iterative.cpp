//Question Link --> https://leetcode.com/problems/kth-smallest-element-in-a-bst/

int kthSmallest(TreeNode* root, int k) {
        
        stack<TreeNode*> st;
        int res;
        
        //add root node + every leftmost node of left subtree to stack
        while(root) 
            st.push(root), root=root->left;           
        
        
        while(!st.empty()){
            
            k--;
            
            root=st.top(); st.pop();
            
            TreeNode* temp=root->right; 
        
            //if right exists push it and every leftmost node of left subtree to stack
            while(temp){ st.push(temp); temp= temp->left;}
            
            if(k==0) return root->val;
            
        }
        
        return -1;
    }
