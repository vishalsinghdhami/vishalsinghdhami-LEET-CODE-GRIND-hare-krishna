class Solution {
public:
    int search(vector<int>& arr, int target) {
        //RECURSIVE
        
        int n=arr.size();
        
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        
        while(high-low>1)
        {
           if(arr[mid]>=target)
           {
               if(arr[mid]==target)
               {
                   return mid;
                   break;
               }
               high=mid;
               mid=(low+high)/2;
           }
            else{
                low=mid;
                mid=(low+high)/2;
            }
            
            
        }
        
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[low]==target)
        {
            return low;
        }
        else if(arr[high]==target)
        {
            return high;
        }
        
        
        else{
            return -1;
        }
        
        
        
        //ITERATIVE
        
        
        
    }
};