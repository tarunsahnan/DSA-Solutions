//Question Link --> https://leetcode.com/problems/single-number-ii/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        long ans=0, numOfOneBits,p=0;
        
        for(int i=0;i<32;i++){ //32 bit max number
            
            numOfOneBits=0;
            
            for(int j=0;j<nums.size();j++){
                numOfOneBits += nums[j]&1; //return least significant bit 
                nums[j] >>= 1;             // right shift as we have included LSB in our count;
            }
            numOfOneBits %= 3; //Check number of ones is muplitple of 3 or not
            ans = ans + numOfOneBits*pow(2,p);  //Binary to decimal conversion
            p++;
            
        }
        return ans;
    }
};
