// //Kadanes Algorithm
// class Solution {
// public:
//     int maxSubArray(vector<int>& a) {
//             int size=a.size();
//   int max_so_far = INT_MIN, max_ending_here = 0;
 
//     for (int i = 0; i < size; i++) 
//     {
//         max_ending_here = max_ending_here + a[i];
//         if (max_so_far < max_ending_here)
//             max_so_far = max_ending_here;
 
//         if (max_ending_here < 0)
//             max_ending_here = 0;
//     }
//     return max_so_far;
    
        
//     }
// };

//Efficient way
class Solution {

public:

	int globalMaxSum;

	int maxSubArray(vector<int> &nums, int n) {

		if (n == 1) return nums[0];

		int currMaxSum = max(nums[n - 1], maxSubArray(nums, n - 1) + nums[n - 1]);

		globalMaxSum = max(globalMaxSum, currMaxSum);

		return currMaxSum;

	}

    int maxSubArray(vector<int> &nums) {

        globalMaxSum = nums[0];

		maxSubArray(nums, nums.size());

        return globalMaxSum;

    }

};