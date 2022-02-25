//Question Link --> https://leetcode.com/problems/compare-version-numbers/

class Solution {
public:
    int compareVersion(string v1, string v2) {
        
        int r1,r2,index1=0,index2=0,n1=v1.size(),n2=v2.size();
    
        while(index1 < n1 || index2 < n2){
            
            
            r1=0;
            r2=0;
            
            while(index1 < n1 and v1[index1] != '.'){
                
                r1 = (r1*10)+(v1[index1]-'0');
                index1++;
            }
            
            while(index2<n2 and v2[index2] != '.'){
                
                r2 = (r2*10)+(v2[index2]-'0');
                index2++;
            }
            
            
            //if(r1==r2) continue;
            
            if(r1 > r2) return 1;
            else if(r1<r2) return -1;
            
            index1++,index2++;
            
        }
        
        return 0;
        
        
    }
};
