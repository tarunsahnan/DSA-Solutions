//Question Link --> https://leetcode.com/problems/cousins-in-binary-tree/

class Solution {
public:
  
    int xLevel,yLevel,xParent,yParent;
    
    void calc(TreeNode* root, int& x, int& y,int level,int parent){
        
        if(root == NULL) return;
        
        if(root->val == x){
            xParent =parent;
            xLevel= level;
        }
        if(root->val == y){
            yParent =parent;
            yLevel= level;
        }
        
        calc(root->left,x,y,level+1, root->val);
        calc(root->right,x,y,level+1, root->val);
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        calc(root,x,y,0,0);
        
        if(xLevel == yLevel  and xParent != yParent) return true;
        
        return false;
        
    }
};
