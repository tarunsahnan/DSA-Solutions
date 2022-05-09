/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */

class NestedIterator {
public:
    stack<NestedInteger> st;
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        pushList(nestedList);
    }
    
    int next() {
        hasNext();
        int temp=st.top().getInteger();
        st.pop();
        return temp;
    }
    
    bool hasNext() {
        while(!st.empty()){
            
            if(st.top().isInteger())
                return true;
            
            auto t=st.top();st.pop();
            pushList(t.getList());   
        }
        return false;
    }
    void pushList(vector<NestedInteger> &List){
        for(int i=List.size()-1;i>=0;i--){
            st.push(List[i]);
        }
    }
    
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */