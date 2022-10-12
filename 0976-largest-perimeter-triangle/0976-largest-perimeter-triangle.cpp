//  LOGIC: sum of 2 sides greater then 3rd side
class Solution {
    // bool check(int i,int j,vector<int> nums)
    // {
    //     if(nums[i]+nums[j]>nums[j+1])//&&nums[j]+nums[j+1]>nums[i]&&nums[j+1]+nums[i]>nums[j])
    //     {                                  //as array is alread sorted we dont wanna check other then 1st check it will come true if 1st qualify
    //         return true;
    //     }
    //     else{
    //            return false;    }
    //      }
public:
    //noob way 
    int largestPerimeter(vector<int>& nums) {
    
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=n-3;
        int j=n-2;
       
        while(i>=0)
        {  
         if(nums[i]+nums[j]>nums[j+1])
         {  return nums[i]+nums[j]+nums[j+1];
            
          break;
         }
         else{
             i--;j--;
         }
            
        }
        
        return 0;
        
        
    }

};