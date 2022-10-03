// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int low=1;
        int high= n;
        //vector<int>v;
        
        while(low<=high)
        {
            int mid=low + (high - low) / 2;;
            
            if(isBadVersion(mid))
            {
                if (mid == 1 || !isBadVersion(mid - 1))
                {
                    return mid;
                }
                
               // v.push_back(mid);
              else{  high=mid-1;}
            }
            else{
                low=mid+1;
            }
            
        }
        
        //return *min_element(v.begin(), v.end());
        return 0;
        
    }    
    
};