//Question Link --> https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> m;

        for(int i=0;i<nums.size();i++){
            auto it = m.find(target - nums[i]);
            if(it!=m.end())
                return (vector<int> {i,(*it).second});
            m.insert({nums[i],i});
            
        }
        return (vector<int>{1});
    }
};