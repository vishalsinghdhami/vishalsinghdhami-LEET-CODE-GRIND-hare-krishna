class Solution {
public:
    int search(vector<int>& arr, int t) 
    { 
       int mid;
     int low=0; int high=arr.size()-1;
       while(high-low>1)
       {
          // if(t==arr[mid]){return 1;}
          mid = (high + low) / 2;
           if(t<=arr[mid])
           {
               high= mid;
           }
           else{
               low=mid+1;
               
           }
           
       }
     
     if(t==arr[low]){
         return low;
     }
     else if(t==arr[high])
     { return high;}
     else{
         return -1;
     }
            
            
            
            
    }
};