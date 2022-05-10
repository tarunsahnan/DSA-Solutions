class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefix[nums.size()];
        prefix[0]=nums[0];
        
        int n=nums.size(),res=0;        
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] + nums[i];
        }
        
        unordered_map<int,int> hash;

        for(int i=0;i<n;i++){
            if(prefix[i] == k)
                res++;
            
            int target=prefix[i]-k;
            
            if(hash.find(target) != hash.end()){
                res+= hash[target];
            }
            
            hash[prefix[i]]++;;
        }
        return res;
    }
};