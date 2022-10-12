class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        //LINEAR TIME AND O(1) SPACE
        int x=0,xfreq=0;int y=0,yfreq=0;

        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==x)
            {
                xfreq++;
            }
            else if(arr[i]==y)
            {
                yfreq++;
            }
            else{
                if(xfreq==0)
                {
                    x=arr[i];
                    xfreq=1;
                }
                else if(yfreq==0)
                {
                    y=arr[i];
                    yfreq=1;
                }
                else {
                    xfreq--;
                    yfreq--;
                }
                
            }
            
            
        }
        
           
     xfreq= yfreq = 0;
     for (const auto & itr: arr)
		 if (itr == x) xfreq++;
			 else if (itr == y) yfreq++;
  
	  vector<int> r;
	  if (xfreq > size(arr)/3) r.push_back(x);
	  if (yfreq > size(arr)/3) r.push_back(y);
	  return r;
      
        
    }
};