class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> st;
        vector<int> hash(nums2.size());
        unordered_map<int,int> mp;
        vector<int> res;
        
        for(int i=nums2.size()-1;i>=0;i--){
            
            while(!st.empty() and st.top() < nums2[i])
                    st.pop();
            
            
            if(st.empty())
                hash[i]=-1;
            
            else{
                hash[i]=st.top();
                
            }
            
            st.push(nums2[i]);
            mp[nums2[i]]=i;
        }
        
        for(auto i: nums1){
            res.push_back(hash[mp[i]]);
        }
        return res;
        
    }
};