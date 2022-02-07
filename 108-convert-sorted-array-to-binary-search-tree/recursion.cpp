//Question Link --> https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

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
    
    TreeNode* rec(vector<int>& nums, int start, int end){
        
        if(start>end) return NULL;
        
        int mid = (start + end)/2;
        
        TreeNode* newNode = new TreeNode (nums[mid]);
        newNode->left = rec(nums, start,mid-1);
        newNode->right = rec(nums,mid+1,end);
        
        return newNode;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return rec(nums,0,nums.size()-1);
    }
};
