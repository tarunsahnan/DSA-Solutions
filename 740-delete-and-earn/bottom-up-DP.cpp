//Question Link -->https://leetcode.com/problems/delete-and-earn/

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        map<int,int> hash;
        set<int> unique;
        
        for(auto i:nums){
            hash[i]++;
            unique.insert(i);
        }
        
        nums.clear();
        
        for(auto i:unique){
            nums.push_back(i);
        }
        
        int curr_2=0,curr_1=0; //curr-2, curr-1
        
        for(int i=0;i<nums.size();i++){
            
            int curr_earning=nums[i]*hash[nums[i]];
            
            if(i>=1 and nums[i] == nums[i-1]+1){
                int temp=curr_1;
                curr_1=max(curr_2 + curr_earning, curr_1);
                curr_2=temp;
            }
            else{
                int temp=curr_1;
                curr_1=curr_1 + curr_earning;
                curr_2=temp;
            }
            
        }
        
    return curr_1;
        
    }
};