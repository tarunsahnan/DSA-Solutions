class Solution {
public:
    
    bool isSubsequence(string s, string t) {
     
    int i=0,j=0;
        while(i<s.size() and j<t.size()){
            if(s[i] == t[j])
                i++;
            j++;
        }
        if(i == s.size()) return true;
        return false;
        
    }
};