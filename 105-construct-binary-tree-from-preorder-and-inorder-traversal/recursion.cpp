//Question Link --> https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

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
    
    TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int start, int end,int& curr){
        
        if(start>end) return NULL;
        
        TreeNode* temp= new TreeNode(preorder[curr]);
        
        int index = start;  
        while(inorder[index] != preorder[curr]) index++;
        curr++;
        
        temp->left= helper(preorder,inorder,start,index-1,curr);
        temp->right= helper(preorder,inorder,index+1,end,curr);
        
        return temp;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int curr=0;
        return helper(preorder,inorder,0,preorder.size()-1,curr);
    }
};
