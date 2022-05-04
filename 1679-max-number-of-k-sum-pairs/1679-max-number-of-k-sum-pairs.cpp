class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_multiset<int> hash;
        int target,res=0;
        hash.insert(nums[0]);
        
        for(int i=1;i<nums.size();i++){
            
            if(nums[i] > k) continue;
            
            target=k-nums[i];
            auto it = hash.find(target);
            
            if( it != hash.end()){
                cout<<target<<" "<<nums[i]<<endl;;
                res++;
                
                hash.erase(it);
            }
            else{
                hash.insert(nums[i]);
            }
            
        }
        return res;
    }
};