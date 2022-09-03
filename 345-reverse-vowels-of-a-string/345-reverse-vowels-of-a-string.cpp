class Solution {
     bool isVowel(string &str,int indx)
{
    if(str.at(indx) == 'a' || str.at(indx) == 'e' || str.at(indx) == 'i' || str.at(indx) == 'o' || str.at(indx) == 'u' || str.at(indx) == 'A' || str.at(indx) == 'E' || str.at(indx) == 'I' || str.at(indx) == 'O' || str.at(indx) == 'U')
    {
     return true;
    }
    return false;
}
    string reverseVowelss(string &s)
{
    int left = 0;
    int right = s.size()-1;
   
    while(left<right)
    {
        while(left<right && isVowel(s,left) == false)
        {
            left++;
        }
        while(left<right && isVowel(s,right) == false)
        {
            right--;
        }
       
        swap(s.at(left),s.at(right));
        left++;
        right--;
    }
    return s;
}

public: string reverseVowels(string s) {
 return reverseVowelss(s);     



                              
    
    
    
    
    
}};