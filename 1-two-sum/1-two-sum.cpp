class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    //for collecting ans indexes    
    vector<int> v;
    //for collecting traced values   
    unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            
            if(m.find(target-nums[i])!=m.end())
            { //if condition true then we are basically storing indexes
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
       return v;
    }
};