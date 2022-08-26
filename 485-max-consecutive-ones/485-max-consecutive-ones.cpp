class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        int i=0,j=1;
        while(j<n)
        {
            if(nums[i]==1&&nums[j]==1)
            {
                 j++;
            }
          else if(nums[i]==1&&nums[j]==0)
          {
               mx=std::max(mx,j-i);
              
              i=j;j++;
          }
            else{
                    
                    i++;j++;
                }
                
         }
        
           if(nums[i]==1&&nums[n-1]==1)
          {
               mx=std::max(mx,n-i);
           }
        
        return mx;
        
        
        
        
    }
};