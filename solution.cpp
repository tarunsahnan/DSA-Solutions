//OJ --> https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
    
    bool checkPalin(string& s,int start,int end){
        
        while(start < end){
            if(s[start] != s[end])
                return false;
            start++,end--;
        }
        
        return true;
    }
    
    // 2,6 == 4
    // S[0] =S[6]
    
    bool validPalindrome(string& s) {
        
        int left=0,right=s.size()-1;
        
        while(left < right){
            
            if(s[left] != s[right]){
                
                if(checkPalin(s,left+1,right) || checkPalin(s,left,right-1))
                    return true;
                else
                    return false;
                
            }
            left++,right--;
            
        }
        return true;
        
    }
};