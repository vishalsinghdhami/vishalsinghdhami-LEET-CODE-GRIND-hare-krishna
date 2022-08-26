class Solution {
public:
    int missingNumber(vector<int>& arr) 
    { int n=arr.size();
      int k=n*(n+1)/2;
     int falsesum=0;
     for(int i=0;i<n;i++)
     {
        falsesum+=arr[i];
    
        }
    return k-falsesum;
    }
};