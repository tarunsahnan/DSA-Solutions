//Question Link -->  https://leetcode.com/problems/add-digits/

class Solution {
public:
    int addDigits(int num) {
        
        int temp;
        while(num / 10 != 0){
            
            temp=num;
            num=0;
            while(temp != 0){
                
                num += temp%10;
                temp/= 10;
            }
        }
        
        return num;
    }
};
