class Solution {
public:
    int numberOfSteps(int num) {
        int count=0;
        
        while(num != 0){
                            count++;

            if(num&1){
                num--;
            }
            else
                num /=2;
        }
        return count;
    }
};