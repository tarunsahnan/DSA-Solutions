class Solution {
public:
    string chars[10]= {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void helper(const string& digits,vector<string>& res, string& strsofar,int index){
        
        if(index == digits.size()){
            res.push_back(strsofar);
            return;
        }
        int loc = digits[index]-'0';
        // cout<<loc<<" "<<index<<endl;
        
        for(int i=0;i<chars[loc].size();i++){
            strsofar.push_back(chars[loc][i]);
            helper(digits,res,strsofar,index+1);
            strsofar.pop_back();
        }
        
        
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0)
            return {};
        
        vector<string> res;
        string strsofar="";
        helper(digits,res,strsofar,0);
        return res;
    }
};