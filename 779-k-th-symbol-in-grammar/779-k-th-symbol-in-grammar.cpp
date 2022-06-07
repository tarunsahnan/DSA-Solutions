class Solution {
public:
    
    int kthGrammar(int N, int K) {
    	if (N == 1) return 0;
    	if (K % 2 == 0) return (kthGrammar(N - 1, K / 2) == 0) ? 1 : 0;
    	else return (kthGrammar(N - 1, (K + 1) / 2) == 0) ? 0 : 1;
    }
    
//     int kthGrammar(int n, int k) {
//         string res="0";
        
//         for(int i=1;i<n;i++){
            
//             for(int j=0;j<res.size();j+=2){
//                 if(res[j] == '0'){
//                     res.insert(j+1,"1");
//                 }
//                 if(res[j] == '1'){
//                     res.insert(j+1,"0");
//                 }
//             }
            
//         }
//         return res[k-1]-'0';
        
    // }
};