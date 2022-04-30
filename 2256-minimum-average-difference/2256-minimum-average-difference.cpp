/*class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    { 
        vector<int>cheat;
      
        for(int i =0; i<nums.size(); i++)
        {
           int x;
            
            int sum=0;
                for(int j=0;j<i;j++){ sum=sum+nums[j];}
            
                
                x= (  sum /  i+1)          -          ( accumulate(nums.begin(), nums.end(), 0)-sum    /nums.size()-i-1 );
                
            
            
            cheat.push_back(x);
            
            sum=0;
        }
        
        sort(cheat.begin(),cheat.end());
        
        return(cheat[0]);
        
        
        
        //#include <numeric>
//cout << accumulate(nums.begin(), nums.end(), 0);
        
        
        
        
    }
};
*/
    class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) 
    {
        int n=nums.size();
        
        long long right_sum = 0;
        for(auto it:nums) right_sum += it;
        
        int mini = INT_MAX;
        int idx = 0;
        
        long long left_sum = 0;
        
        for(int i=0; i<n; i++)
        {
            left_sum += nums[i];
            right_sum -= nums[i];
            
            long long first = (left_sum/(i+1));
    
            long long last = i<n-1 ? (right_sum/(n-i-1)) : 0;
            
            int diff = abs(first - last);
            
            if(diff < mini)
            {
                mini = diff;
                idx = i;
            }
        }
        
        return idx;
    }
};