class Solution {

    //RECURSIVE
     int binarysearch(vector<int>& arr,int low,int high,int target)
        {
          if(low>high)
          {
              return -1;
          }
           
         int mid=(low+high)/2; 
           
          if(arr[mid]==target)
          {
              return mid;
          }
          else if (arr[mid]>target)
          {
             return binarysearch(arr,low,mid-1,target);
          }
          else
          {
            return binarysearch(arr,mid+1,high,target);
          }
          
          
        }       
    
    public:
    int search(vector<int>& arr, int target) 
    {
        
        int n=arr.size();
        int low=0;int high=n-1;
       return binarysearch(arr,low,high,target);
        
    }
      
};       
        
//          //ITERATIVE
//     int search(vector<int>& arr, int target) {    
        
//         int n=arr.size();
        
//         int low=0;
//         int high=n-1;
//       while(low<=high)
//       {
//         int mid=(low+high)/2;
        
//           if(arr[mid]==target)
//           {
//               return mid;
//           }
//           else if(arr[mid]>target)
//           {
//               high=mid-1;
//           }
//           else{
//               low=mid+1;
//           }
          
//       } 
//         return -1;
//     }
// };