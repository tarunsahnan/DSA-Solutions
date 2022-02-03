class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        
        int[] ans = new int[nums.length - k + 1];
        Deque<Integer> deque = new LinkedList<Integer>();
        int p = 0;
        
        for(int i = 0; i < nums.length; i++){
            if( i >= k){
                
                //removing the elements out of the window
                if(!deque.isEmpty() && deque.peekFirst() <= i-k)
                    deque.removeFirst();
            }
            
            //removing the elements which are not to be the candidate
            //i.e. smaller than the next element
            while(!deque.isEmpty() && nums[deque.peekLast()] <= nums[i])
                deque.removeLast();
            
            deque.addLast(i);
            
            if(i >= k-1)
                ans[p++] = nums[deque.peekFirst()];
        }
        
        return ans;
    }
}
