class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        int n= nums.size(),i=0;int prefsum=0;unordered_map<int,int>m;
        while(i<n)
        {   prefsum +=nums[i];
            prefsum %=k;
         
            if(prefsum==0&&i!=0)
            {return true;}
            if (m.find(prefsum)!=m.end())
               {
                   if(i-m[prefsum]>1){return true;}
               }
            else{
                m[prefsum]=i;
            }
          i++;  
        }
        return false;
        
    }
};