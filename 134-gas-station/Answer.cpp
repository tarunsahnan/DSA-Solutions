// Question Link --> https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int total=0,current=0,start=0;
        
        for(int i=0;i<gas.size();i++){
            
            total += gas[i] - cost[i];
            current += gas[i] - cost[i];
            
            if(current < 0){
                current=0;
                start=i+1;
            }
        }
        
        if(total < 0) return -1;
        return start;
    }
};
