class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> even;
        priority_queue<int> odd;
        
        string temp=to_string(num);
        
        for(auto i:temp){
            if(i-'0' & 1)
                odd.push(i-'0');
            else
                even.push(i-'0');
        }
        
        int res=0;
        
        for(int i=0; i<temp.size(); i++){
            if(temp[i] & 1){
                res = res*10 + odd.top();
                odd.pop();
            }
            else{
                res = res*10 + even.top();
                even.pop();
            }
        }
        return res;
    }
};