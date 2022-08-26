class Solution {
public:
    void rotate(vector<int>& arr, int k) {
       int  n=arr.size();
        k=k%n;
        int i=0,j=arr.size()-1;
        while(i<j)
        {
            swap(arr[i],arr[j]);
            i++;j--;
        }
        
         int p=0,q=k-1;
        while(p<q)
        {
            swap(arr[p],arr[q]);
            p++;q--;
        }
         int v=k,s=arr.size()-1;
        while(v<s)
        {
            swap(arr[v],arr[s]);
            v++;s--;
        }
//           //REVERSING the complete array !!
//     for(int i=0;i<n/2;i++) swap(arr[i],arr[n-i-1]);
    
//     //Reversing first k elements !!
//     for(int i=0;i<k/2;i++) swap(arr[i],arr[k-i-1]);
     
//     //Reversing next n-k elements
//     for(int i=k;i<k+(n-k)/2;i++) swap(arr[i],arr[n+k-i-1]); 
        
        
    
        
       
        
    }
};