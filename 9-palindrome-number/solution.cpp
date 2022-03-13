//Question Link --> https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        
        int res=0;
        
        while(x>res){
            res=(res*10) + (x%10);
            x/=10;
        }
        return res==x || x==res/10;
    }
};