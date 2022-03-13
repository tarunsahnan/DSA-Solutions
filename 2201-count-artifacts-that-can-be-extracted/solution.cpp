//Question Link --> https://leetcode.com/problems/count-artifacts-that-can-be-extracted/

class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        
        set<pair<int,int>> hash;
        for(auto i:dig){
            hash.insert({i[0],i[1]});
        }
        int ans=0;
        for(auto i:artifacts){
            
            for(int k=i[0];k<=i[2];k++){
                for(int j=i[1];j<=i[3];j++){
                    if(!hash.count({k,j})){
                        goto end;
                    }
                }
                
            }
            ans++;
            end:;
        }
        return ans;
        
        
    }
};