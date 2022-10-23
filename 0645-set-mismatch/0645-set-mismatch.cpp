class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    vector<int>v;int p=1;
    unordered_map<int,int>m;int n=nums.size();
    for(int i=0;i<nums.size();i++)
    {
        m[nums[i]]++;
      
    }
         for(int i=1;i<=nums.size();i++)
    {
        m[i]++;
    
    }
      
        
        for(auto x:m)
        {
            if(x.second==3){v.push_back(x.first);break;}
        }
          for(auto x:m)
        {
            if(x.second==1){v.push_back(x.first);break;}
        }
        
        return v;
    }
};