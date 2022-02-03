//Question Link --> https://leetcode.com/problems/kth-smallest-element-in-a-bst/

 void inorder(TreeNode* root, vector<int> &res){
        
        if(root == nullptr) return;
        
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);

    }
    
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int> res;
        inorder(root,res);
        
        return res[k-1];
        
        
    }
