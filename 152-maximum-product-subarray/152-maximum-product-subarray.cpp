class Solution {
public:
    int maxProduct(vector<int>& A) {
        int r = A[0],n=A.size();
    

    
    for (int i = 1, imax = r, imin = r; i < n; i++) {
        if (A[i] < 0)
            swap(imax, imin);
        
        imax = max(A[i], imax * A[i]);
        imin = min(A[i], imin * A[i]);
        
        r = max(r, imax);
    }
    return r;
    }
};