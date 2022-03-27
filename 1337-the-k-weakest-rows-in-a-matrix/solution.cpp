// OJ --> https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    
    int binarySearch(vector<int>& nums){
        
        int lo=0,hi=nums.size(),mid;
        
        while(lo<hi){
            mid = (hi+lo)/2;
            
            if(nums[mid] == 1)
                lo=mid+1;
            else
                hi=mid;
        }
        return lo;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<mat.size();i++){
            pq.push({binarySearch(mat[i]),i});
            if(pq.size() > k)
                pq.pop();
            
        }
        vector<int> res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};