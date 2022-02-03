//Question Link --> https://leetcode.com/problems/range-sum-of-bst/

void calc(TreeNode* root, int& low, int& high,int& res){
        
        if(root == NULL) return;
        
        if(root->val > high)
         calc(root->left,low,high,res);   
        
        else if(root->val < low)
         calc(root->right,low,high,res);   
        
        else{
            res+=root->val;
            calc(root->left,low,high,res);
            calc(root->right,low,high,res); 
        }
        
    }
    
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res=0;
        calc(root,low,high,res);
        return res;
    }
