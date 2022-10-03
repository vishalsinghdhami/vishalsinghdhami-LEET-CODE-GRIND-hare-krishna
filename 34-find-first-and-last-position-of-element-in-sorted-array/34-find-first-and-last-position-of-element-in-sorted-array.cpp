//approach:
        //step1:if we find our target element as mid through binary search and 
        //step2:then 2 binary search for 1st half of mid and 2nd binary search for 2nd half and
        //basically we intialize our 1st mid as some variable and compare the variable
        //in 1st half binary search and 2nd half binary search seprately 
class Solution 
{
   public:
    vector<int> searchRange(vector<int>& nums, int target) 
{
        
        vector<int> ans(2,-1);
        int low=0;int high=nums.size()-1;
        
        //1st half
        while(low<=high)
        {
            int mid= (high+low)/2;
        
    if(nums[mid]==target)
    {     ans[0]=mid;
          high=mid-1;
         
    }
    else if(nums[mid]<target)
    {low=mid+1;}
   
    else
    {high=mid-1;}
        
        }
        low=0;high=nums.size()-1;
        
        //2nd half
          while(low<=high)
        {
              int mid= (high+low)/2;
        
    if(nums[mid]==target)
    {
       ans[1]=mid;
       low=mid+1; 
         
    }
    else if(nums[mid]<target)
    {low=mid+1;}
    
    else
    {high=mid-1;}
            
       
        }
    
        return ans;
}
};