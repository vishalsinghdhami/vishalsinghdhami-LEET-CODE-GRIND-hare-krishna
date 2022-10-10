 //   2 APPROACHES
class Solution {
public:
//1.    HASH MAP SOLUTION  
    
    int longestPalindrome(string s) 
    {
        map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        
        int ans=0; bool jugaad=false;
        
        for(auto x: m)
        {
            if(x.second%2==0)
            {
                ans=ans+x.second;
            }
            else{
                jugaad=true;
                ans=ans+x.second-1;
            }
        }
        
        
        if(jugaad ==true)
        {
            return ans+1;
        }
        else{
            return ans;
        }
        
    }
};