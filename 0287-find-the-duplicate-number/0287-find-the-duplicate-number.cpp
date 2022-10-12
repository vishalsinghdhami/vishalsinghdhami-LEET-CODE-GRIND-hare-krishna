class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {  int ans=0;
        for( int i=0;i<nums.size();i++)
        {
           if(nums[abs(nums[i])-1]<0)
           { ans=(abs(nums[i]));
             return ans;
            break;
           }
           
            
            nums[abs(nums[i])-1]= -1*nums[abs(nums[i])-1];
            
            
        }

        
        
        
        //    int len = nums.size();
        // for (int i = 0; i < len; ) {
        //     int n = nums[i];
        //     if (n == i + 1) {
        //         i++;
        //     } else if (n == nums[n - 1]) {
        //         return n;
        //     } else {
        //         nums[i] = nums[n - 1];
        //         nums[n - 1] = n;
        //     }
        //}

        return 0;
        
        
        
        
        
        
        
        
}
        
        
        
    
};