class Solution {
public:
//     int findDuplicate(vector<int>& nums) 
//     {  int ans=0;
//         for( int i=0;i<nums.size();i++)
//         {
//            if(nums[abs(nums[i])-1]<0)
//            { ans=(abs(nums[i]));
//              return ans;
//             break;
//            }
//           nums[abs(nums[i])-1]= -1*nums[abs(nums[i])-1];
            
//         }

       int findDuplicate(vector<int>& nums) {
        // Each index is taken 1 based, as if it is zero based, then
        // for nums[2] = 3, if we goto nums[nums[2] - 1], it is again nums[2]
        // infinite loop
        int hare = nums[0], tortoise = nums[0];
        
        do {
            hare = nums[nums[hare]];
            tortoise = nums[tortoise];
        } while(hare != tortoise);
        
        // to find the starting of cycle, make tortoise to start from begining
        tortoise = nums[0];
        while(hare != tortoise) {
            hare = nums[hare];
            tortoise = nums[tortoise];
        }
        
        return hare;
    
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

        //return 0;
    //}
        
        
        
    
};