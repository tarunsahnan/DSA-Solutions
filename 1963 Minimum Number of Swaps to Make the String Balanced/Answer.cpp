//Question Link --> https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/

class Solution {
public:
    int minSwaps(string s) {
        
        int open=0,cloe=0;
        
        for(auto i:s){
            if(i=='[')
                open++;
            else{
                if(open>0) open--;
                else cloe++;
            }
        }
        
        return (cloe+1)/2;
        
    }
};
