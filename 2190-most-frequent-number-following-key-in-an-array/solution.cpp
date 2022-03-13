//Question Link --> https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int> hash;
        
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i] == key)
                hash[nums[i+1]]++;
        }
        
        int res=INT_MIN,res_freq=INT_MIN;
        
        for(auto i:hash){
            if(i.second > res_freq){
                res=i.first;
                res_freq=i.second;
            }
        }
        
        return res;
        
    }
};