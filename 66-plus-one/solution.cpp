//OJ --> https://leetcode.com/problems/plus-one/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size();
        int carry=0;
        digits[n-1]++;
        for(int i=n-1;i>=0;i--){
            
            digits[i]+= carry;
            carry=0;
            
            if(digits[i] > 9){
                carry = 1;
                digits[i] %= 10;
            }
            else
                break;
        }
        if(carry){
            digits.insert(digits.begin(),1);
        }
        return digits;
        
    }
};