//Question Link --> https://leetcode.com/problems/search-in-a-binary-search-tree/

TreeNode* searchBST(TreeNode* root, int val) {
        
        if(root == NULL) return NULL;            
        
        if(root -> val > val)return searchBST(root->left, val); //search in left subtree
        
        else if(root -> val < val) return searchBST(root->right, val);  //search in right subtree
    
        return root;    // required node is the current node
    }
