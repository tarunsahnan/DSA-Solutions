class Solution {
public:
    
    static bool cmp(pair<long long,int> a,pair<long long,int> b){
            return a.first < b.first;
    }
    
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        
        vector<pair<long long,int>> hash;
        for(auto x:nums){
        
            string s = to_string(x);
            string temp="";
            for(int i=0; i<s.length(); i++) {
                temp += to_string(mapping[s[i]-'0']);
            }
            hash.push_back({stoi(temp), x});
        }
        
        sort(hash.begin(),hash.end(),cmp);
        
        int k=0;
        for(auto i:hash){
            nums[k++]=i.second;
        }
        
        for(auto i:hash) cout<<i.first<<endl;
        return nums;

    }
};