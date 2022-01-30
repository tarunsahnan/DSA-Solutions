//Question Link --> https://leetcode.com/problems/next-greater-element-i/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> map;
        
        for(int i=nums2.size()-1;i>=0;i--){
            
                while(!st.empty() and st.top() < nums2[i])
                    st.pop();
                
                if(st.empty()){
                    
                    map[nums2[i]]= -1;
                }
                else
                    map[nums2[i]]=st.top();
                st.push(nums2[i]);
            }
        
        
        vector<int> res;
        for(auto i:nums1)
            res.push_back((*map.find(i)).second);
        
        return res;
    }
};
