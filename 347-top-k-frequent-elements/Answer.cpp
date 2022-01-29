//Quesion Link --> https://leetcode.com/problems/top-k-frequent-elements/

class Solution {
public:
    class comp{
        public:
        bool operator()(pair<int,int> a, pair<int,int> b){
        if(a.second!=b.second)
            return a.second>b.second;
        
        return a.first < b.first;
    }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> hash;
        
        for(auto i:nums)
            hash[i]++;
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, comp> pq;
        
        for(auto i=hash.begin();i != hash.end();i++){
            
            if(pq.size()<k)
                pq.push(*i);
            else{
                if(pq.top().second < i->second){
                pq.pop();
                pq.push(*i);
            }
            }
            
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().first);
            pq.pop();
        }
        return res;
        
    }
};
