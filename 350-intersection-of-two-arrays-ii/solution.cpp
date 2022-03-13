//Question Link --> https://leetcode.com/problems/intersection-of-two-arrays-ii/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> fre1,fre2;
        
        for(int i:nums1)
            fre1[i]++;
        
        for(int i:nums2)
            fre2[i]++;
        
        vector<int> res;
        
        //fre1 will always be of small size
        if(fre1.size() > fre2.size())
            swap(fre1,fre2);
    
        for(auto i:fre1){
            if(fre2.find(i.first) != fre2.end()){
                for(int j=0;j<min(i.second,fre2[i.first]);j++)
                    res.push_back(i.first);
            }
        }
        
        return res;
    }
};