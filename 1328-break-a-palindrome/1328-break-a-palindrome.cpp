class Solution {
public:
    string breakPalindrome(string s)
    {
      ////  Lexicographic mtlbh kya :
      
           int n = s.size();
        if(n == 1)
            return "";
        int i = 0;
		// checking for the first char that is not equal to 'a'
        for(i = 0; i < n; i++)
        {
		// if len is odd then we can't make string not pallindrome by replacing this character
            if(n&1 && i == n/2) 
                continue;
            if(s[i] != 'a')
                break;
        }
           // all chars are 'a' then we can make lexo smaller by replacing last char with 'b'
        if(i == n )
            s[n-1] = 'b';
        else
            s[i] = 'a';
        return s;
        
        
        
        
        
    }
};