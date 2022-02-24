//Question Link --> https://leetcode.com/problems/find-median-from-data-stream/

class MedianFinder {
public:
    
    int size;
    vector<int> in;
    
    MedianFinder() {
        size=0;
    }
    
    void addNum(int num) {
        size++;
        in.push_back(num);
        sort(in.begin(),in.end());
    }
    
    double findMedian() {
        // cout<<size<<endl;
        if(size == 0) return 0;
        if(size == 1) return in[0];
        
        if(size & 1) return (in[size/2]);
        
        return ((in[size/2]) + (in[(size/2) - 1]))/2.0;
    }
};
