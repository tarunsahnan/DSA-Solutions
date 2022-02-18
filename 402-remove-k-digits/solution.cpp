//Question Link --> https://leetcode.com/problems/remove-k-digits/

class Solution {
public:
    string removeKdigits(string num, int k) {
        
        int keep=num.size()-k;
        string res="";
        
        if(k == num.size()) return "0";
    
        
        for(int i=0;i<num.size();i++){
            
            while(res.size()>0 and k>0 and res.back() > num[i]){
                    res.pop_back();
                    k--;
            }
            res.push_back(num[i]);
        }
        
        res.erase(keep , string::npos);
        
        while(res.size() >1 and res[0] == '0')
            res.erase(res.begin());
        
        return res;
        
    }
};
