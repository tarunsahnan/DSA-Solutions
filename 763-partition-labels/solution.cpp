//OJ --> https://leetcode.com/problems/partition-labels/

class Solution {
public:
    vector<int> partitionLabels(string s) {
     
        vector<int> hash(26,0);
        
        
        //last index
        for(int i=0;i<s.size();i++)
            hash[s[i]-'a']=i;
        
        vector<int> res;
        for(int i=0;i<s.size();i++){
            
            int j=hash[s[i]-'a'];
            int ans=1;
            while(i!=j){
                ans++;
                if(hash[s[i]-'a'] > j)
                    j=hash[s[i]-'a'];
                i++;
            }
            res.push_back( ans );
            
        }
        
        return res;
        
    }
};