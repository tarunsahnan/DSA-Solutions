class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        Integer candidate = null;
        
        for(int n : nums){
            if(count == 0)
                candidate = n;
            
            if(n == candidate)
                count += 1;
            else
                count += -1;
        }
        
        return candidate;
    }
}
