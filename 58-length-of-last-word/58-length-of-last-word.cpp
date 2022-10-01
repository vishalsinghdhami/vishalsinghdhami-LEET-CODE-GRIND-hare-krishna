class Solution {
public:
    int lengthOfLastWord(string s) {
        int x=0;
        int i= s.size()-1;
        for(int j=s.size()-1;j>0;j--)
        {
         if(isspace(s[j]))
         {
             i--;
         }
            else{
                break;
            }
        }
      //  return i;
       

        while(s[i]!=' '&&i>0)
        {
            x++;
            i--;
        }
        if(i==0&&s[i]!=' '){
         x=x+1;
        }
        return x;
        
        
    }
};