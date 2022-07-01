class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& b, int t) {
     sort(b.begin(),b.end(),cmp);
        int res=0;
        for(auto i:b){
            if(t==0) break;
            res+=min(t,i[0])*i[1];
            t -= min(t,i[0]);
        }
        return res;
    }
};