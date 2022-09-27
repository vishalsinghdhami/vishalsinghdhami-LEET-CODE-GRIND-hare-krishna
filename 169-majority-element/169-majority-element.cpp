class Solution {
public:
   //Hash Table:
    int majorityElement(vector<int>& nums) {
      
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int ans;
        for(auto x: m)
        {
            if(x.second>n/2)
            {
                ans= x.first;
            }
        }
        
    return ans;
    
    //Sorting
// int majorityElement(vector<int>& nums) {
        
//    
    }
};