//Question Link --> https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,int start,int end, int &curr){
        
        if(start>end) return NULL;
        
        TreeNode* temp=new TreeNode(postorder[curr]);
        
        
        int index=0;
        while(inorder[index] != temp->val)
            index++;
        
        curr--;  
        
        temp->right=helper(inorder,postorder,index+1,end,curr);
        temp->left=helper(inorder,postorder,start,index-1,curr);
        
        
        return temp;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int curr=postorder.size()-1;
        
        return helper(inorder,postorder,0,curr,curr);
    }
};
