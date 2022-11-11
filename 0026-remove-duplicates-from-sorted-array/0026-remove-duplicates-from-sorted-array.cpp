class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,k=1;
        while(i<=j&&j<=nums.size()-1)
        {
          if(nums[i]==nums[j])
          {
              j++;
          }
          else
          {  i++;
              swap(nums[i],nums[j]);
              k++;
              j++;
          }
        }
 return k;
    }
};