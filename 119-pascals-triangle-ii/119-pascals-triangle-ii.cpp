class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex+1,1);
        int prevState=1;
        for(int i=0;i<=rowIndex;i++){
            
            for(int j=0;j<=i;j++){
                if(j==i || j==0){
                    res[j]=1;
                    prevState=1;
                    
                }
                else{int temp = res[j];
                    res[j] += prevState;
                     prevState=temp;
                    cout<<j<<" ";
                }
            }
        }
        return res;
    }
};