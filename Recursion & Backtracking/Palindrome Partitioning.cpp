//Question Link --> https://leetcode.com/problems/palindrome-partitioning/

class Solution {
public:
    
    
    bool ispalin(string s,int start,int end){
        
        while(start<=end)
            if(s[start++] != s[end--])
                return false;
        return true;
        
    }
    
    void calc(string& s, vector<vector<string>>& result, int indx, vector<string>& strsofar){
        
        if(indx==s.size()){
            result.push_back(strsofar);
            return;
        }
        
        
        for(int i=indx;i<s.size();i++){
            if(ispalin(s,indx,i)){
                strsofar.push_back(s.substr(indx,i-indx+1));
                calc(s,result,i+1,strsofar);
                strsofar.pop_back();    
            }
        }

    }
    
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>> result;
        vector<string> strsofar;
       
        
        calc(s,result,0,strsofar);
        return result;
        
    }
};
