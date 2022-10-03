class Solution {
    public int[] searchRange(int[] nums, int target) {
        for (int left = 0, right = nums.length -1; left <= right; ) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                int i = mid, j = mid;
                
                for ( ; i - 1 >= 0 && nums[i - 1] == target; i--);
               
                for ( ; j + 1 < nums.length && nums[j + 1] == target; j++);
                
                return new int[]{i, j};
            }
            
            else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return new int[]{-1, -1};
    }
}