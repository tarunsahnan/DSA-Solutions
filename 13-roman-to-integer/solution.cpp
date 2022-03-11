//Question Link --> https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        map<char,int> hash = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        
        int ans=0,n=s.size()-1;
        int i=n;
        
        while(i>=0){
            
            if(i<n and hash[s[i]] < hash[s[i+1]]){
                ans-= hash[s[i]];
                cout<<hash[s[i]]<<"minus vala ";
            }
            else {
                ans+=hash[s[i]];
                cout<<hash[s[i]]<<" ";
            }
            i--;
        }
        
        return ans;
    }
};