class Solution {
public:
    string largestOddNumber(string str) {
        
       string ans="";
        
        for(int i=str.size()-1;i>=0;i--)
        {   char a = str[i];
            int x=a-'0';
            if(x % 2 !=0)
            {
                for(int j=0;j<=i;j++)
                {
                    ans += str[j];
                }
                     return ans;
                break;
            }
            
        }
        
        return ans;
        
    }    
};