class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
         for (int i = 1; i < nums.size(); i++) {
            // Result at index `i` is sum of result at `i-1` and element at `i`.
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};