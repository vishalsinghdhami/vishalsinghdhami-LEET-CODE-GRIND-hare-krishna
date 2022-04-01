class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // two pointer idea
        vector<vector<int>> ans; 
        if(nums.size() < 3) return ans; // base case 1, in case if the size is less than 3 
        sort(nums.begin(), nums.end()); // sort the array as accending order
        
        /* i < nums.size()-2 since the special case nums[nums.size()-1] and nums[nums.size()-2]
            it will traversal
        */
        for(int i=0; i<nums.size()-2; i++){ 
            int a = nums[i];
            if(a > 0) break; // the combination number behind i will not be 0
            else if (i>0 && a== nums[i-1]) continue; // in case repeated number
            
            // j start from i+1 postion with accending order
            // k start from the back of the nums with decending order
            for(long j=i+1, k=nums.size()-1; j<k;){ 
                int b = nums[j];
                int c = nums[k];
                if(a+b+c == 0){ 
                    ans.push_back(vector<int>{a,b,c}); // just push back the answer
                    while (j<k && b == nums[++j]); // to avoid the duplicate numbers of nums[j] 
                    while (j<k &&c == nums[--k]); // to avoid the duplicate numbers of nums[k]
                    
                } 
                else if(a+b+c < 0) j++; // if small than 0 , then we need to increase j index
                else k--; // decrease k index
            }
        }
        return ans;   
    }
};