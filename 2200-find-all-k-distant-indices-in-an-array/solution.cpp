//Question Link --> https://leetcode.com/problems/find-all-k-distant-indices-in-an-array/

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
        vector<int> index,res;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
            if(key==nums[i])
                index.push_back(i);
      
        for(int i=0;i<n;i++){
            bool flag=false;
            
            for(auto j:index){
                if(abs(i-j) <= k){
                    flag=true;
                    // cout<<i<<"ii"<<j<<endl;
                    break;
                }
            }
            if(flag)
                res.push_back(i);
            
        }
        return res;
    }
};