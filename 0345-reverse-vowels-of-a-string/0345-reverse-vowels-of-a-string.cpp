class Solution {
public:
    bool isVowel(char x)
        { if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){return true;} 
        else
        {return false;}
        }
    string reverseVowels(string s) {
int i = 0;
        int j  = s.size() - 1;
        
        // While we still have characters to traverse
        while (i < j) {
         
            if(isVowel(s[i])&&isVowel(s[j]))
               {
                 swap(s[i],s[j]);
                i++;j--;
               }
            else if(!isVowel(s[i]))
               {
                   i++;
               }
               else if(!isVowel(s[j]))
               {
                   j--;
               }
            
        }
        
        return s;
    }
};
