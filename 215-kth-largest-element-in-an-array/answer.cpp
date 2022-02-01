//Question Link --> https://leetcode.com/problems/kth-largest-element-in-an-array/

int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-k];
    }
