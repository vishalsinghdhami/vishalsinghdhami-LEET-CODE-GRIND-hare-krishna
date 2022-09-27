class Solution {
public:
    //   MOORES VOOTING ALGO
    
     //OPTIMISED O(N) time  O(1) SPACE
 int majorityElement(vector<int>& nums) {

     int freq=0;
     int ans=0;
     for(int i=0;i<nums.size();i++)
     {
         if(freq==0)
         {
             ans=nums[i];
         }
         
         if(nums[i]==ans)
         {
             freq++;
         }
          else
             {
                 freq--;
             }
         
         
     }
     
      return ans;
    
    }
    
    
    
    //Hash Table:O(N) time  O(N) SPACE
//     int majorityElement(vector<int>& nums) {
      
//         int n=nums.size();
//         unordered_map<int,int> m;
//         for(int i=0;i<nums.size();i++)
//         {
//             m[nums[i]]++;
//         }
//         int ans;
//         for(auto x: m)
//         {
//             if(x.second>n/2)
//             {
//                 ans= x.first;
//             }
//         }
        
//        return ans;
//     }
    
    
 
};