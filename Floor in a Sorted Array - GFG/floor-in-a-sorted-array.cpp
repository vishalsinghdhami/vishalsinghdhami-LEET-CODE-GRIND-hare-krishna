//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> nums, long long n, long long target){
   
   //return index of just smaller element or equal to x element
   if(nums[0]>target)
   {
       return -1;
   }
   else if(nums[n-1]<target)
   {
       return n-1;
   }
  int low = 0, high = nums.size()-1;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            
            if(nums[mid] == target) return mid;
            
            else if(nums[mid] > target) high = mid-1;
            
            else low = mid+1;
        }
        
        if(nums[low]>target)
        {
            return low-1;
        }
        else{
            return low;
        }
     
    }   
     
};


//{ Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driver Code Ends