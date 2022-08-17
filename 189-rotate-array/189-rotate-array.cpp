class Solution {
public:
 
    void reverse(vector<int>&arr, int left, int right){
    
    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

void rotate(vector<int>&nums, int k){
  
   int n;
    n=nums.size();
        k = k % n;
    if(k < 0){
        k += n;
    }
    reverse(nums,0,n - 1);
    reverse(nums,0 , k - 1);
    reverse(nums,k ,n - 1);
    
}
    

};