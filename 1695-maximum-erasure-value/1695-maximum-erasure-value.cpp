class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
      
        int start=0,end=0;
        set<int> s;
        int sum=0,ans=0;
        
        
        while(end<nums.size())
        {
            while(start<end&&s.find(nums[end])!=s.end())
            {
                s.erase(nums[start]);
                sum=sum-nums[start++];
                
            }
        
     s.insert(nums[end]);
            sum=sum+nums[end++];
            ans= max(ans,sum);
        }
        return ans;
  
    }
};