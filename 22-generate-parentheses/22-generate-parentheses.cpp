class Solution {
public:

    void helper(vector<string>& res, string strsofar,int open,int close){
        if(open ==0 and close==0){
            res.push_back(strsofar);
            return;
        }
        
        if(open<0 || close<0)
            return;
        
        strsofar.push_back('(');
        helper(res,strsofar,open-1,close);
        strsofar.pop_back();
        
        if(open < close){
            strsofar.push_back(')');
            helper(res,strsofar,open,close-1);
            strsofar.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string strsofar="";
        vector<string> res;
        helper(res,strsofar,n,n);
        return res;
    }

};