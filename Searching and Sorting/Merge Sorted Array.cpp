// Question Link --> https://leetcode.com/problems/merge-sorted-array/

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int n1=0,n2=0;
        vector<int> v;
        int arr[m+n],k=0;
        while(n1<m and n2<n){
            
            if(nums1[n1]<nums2[n2])
            {
                arr[k++]=nums1[n1];
                n1++;
            }
            
            else if(nums1[n1]>nums2[n2]){
                arr[k++]=nums2[n2];
                n2++;
            }               
            else{
                arr[k++]=nums1[n1++];
                arr[k++]=nums2[n2++];
            }
        }
        
        while(n1<m){
            arr[k++]=nums1[n1++];
        }
        
        while(n2<n){
            arr[k++]=nums2[n2++];
        }
        
        for(int i=0;i<(m+n);i++)
            nums1[i]=arr[i];
    }
