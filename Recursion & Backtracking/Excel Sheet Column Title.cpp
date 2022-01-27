//Question Link --> https://leetcode.com/problems/excel-sheet-column-title/

class Solution {
public:
    
    
    void rec(int col, string& s, string& result){
        
        if(col==0){
            for(int i=s.size()-1;i>-1;i--)
                result.push_back(s[i]);
            return;
        }
        col--;
        s.push_back('A'+(col%26));
        rec(col/26,s,result);
        s.pop_back();
        
    }
    
    string convertToTitle(int columnNumber) {
        
        string s="";
        string result="";
        rec(columnNumber,s,result);
        return result;
        
    }
};
