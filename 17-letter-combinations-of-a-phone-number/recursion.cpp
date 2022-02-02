//Question Link --> https://leetcode.com/problems/letter-combinations-of-a-phone-number/

class Solution {
public:
  
    string keypad[10]={" ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void generate(string& strsofar, vector<string>& result, string& digits, int start,int &end){
        if(start>end){
            result.push_back(strsofar);
            return;
        }
        else{
            
            int digitpressed=digits[start]-'0';
            
            for(int i=0;i<keypad[digitpressed].length();i++){
                
                strsofar.push_back(keypad[digitpressed][i]);
                generate(strsofar,result,digits,start+1,end);
                strsofar.pop_back();
            }        
        }
    }
    
    
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if(digits.size()==0)
            return result;
        int start=0, end=digits.size()-1;
        string strsofar;
        generate(strsofar,result,digits,start,end);
        return result;
    }
};
