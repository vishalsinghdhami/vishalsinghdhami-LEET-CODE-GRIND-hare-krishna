class Solution {
public:
 
    int maximumValue(vector<string>& strs) {
        
        int ans=0;
       
        for(int i=0;i<strs.size();i++)
        {  
           string s=strs[i];bool jugaad=false;
           for(int j=0;j<s.size();j++)
            {  char ch=s[j];
                if(isalpha(ch))
                {
                    jugaad=true;
                    break;
                }
            }
         
            if(jugaad)
            {  int ssize=s.size();
            ans=max(ans,ssize);
            }
         else{
               int value = stoi(s);
            ans=max(ans,value);
              }
         }

       return ans;
        
    }
};