//Question Link --> https://leetcode.com/problems/generate-parentheses/

void GP(string& strsofar, vector<string>& result,int open, int close){
        
        if(open>close or open<0 or close<0)
            return;
        
        if(open==0 and close==0){
            result.push_back(strsofar);
            return;
            
        }
        
        strsofar.push_back('(');
        GP(strsofar,result,open-1,close);
        strsofar.pop_back();
        
        
        strsofar.push_back(')');
        GP(strsofar,result,open,close-1);
        strsofar.pop_back();
        
        return;     
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string strsofar="";
        GP(strsofar,result,n,n);
        return result;
    }
