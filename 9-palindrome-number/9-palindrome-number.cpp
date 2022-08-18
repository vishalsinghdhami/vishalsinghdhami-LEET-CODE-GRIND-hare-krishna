class Solution {
public:
 bool isPalindrome(long int x) {
       long int y=0,t;
        t=x;
        while(t>0)
        {
            
            y=y*10+ t%10;
            t/=10;
        }
        if(y==x)
            return true;
        else
            return false;
    }
};