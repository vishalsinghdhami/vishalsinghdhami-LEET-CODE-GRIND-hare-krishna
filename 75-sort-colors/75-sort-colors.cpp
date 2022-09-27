class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n= arr.size();
        int a=-1,b=0,c=n-1;
        
        while(b<=c)
        {
             if(arr[b]==0)
            {     a++; 
                 swap(arr[a],arr[b]);

                
                 b++;
            } 
          else if(arr[b]==2)
          {
              swap(arr[b],arr[c]);
              c--;
          }
            else
            {
                b++;
            }
            
        }
      
        
        
        
        
        
        
    }
};