class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size() < 3) return {};
        
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        
        unordered_map<int,int> hash;
        
        for(int i=0;i<nums.size();i++)
                hash[nums[i]]=i;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                break;
            }
            for(int j=i+1;j<nums.size()-1;j++){
                
                int l1=nums[i],l2=nums[j];
                int l3= -l1-l2;
                
                auto itr = hash.find(l3);
                
                if(itr == hash.end()) continue;
                
                int found=itr->second;
                
                if(found > j){
                    res.push_back({l1,l2,l3});
                    
                    while(j<nums.size()-1 and nums[j] == nums[j+1])
                        j++;
                    
                }
                while(i<nums.size()-1 and nums[i] == nums[i+1])
                        i++;
            }
        }
        return res;
        
        
    }
};