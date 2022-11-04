class Solution {
public:
    bool isVowel(char x)
        { if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){return true;} 
        else
        {return false;}
        }
    string reverseVowels(string s) {
int start = 0;
        int end  = s.size() - 1;
        
        // While we still have characters to traverse
        while (start < end) {
            // Find the leftmost vowel
            while (start < s.size() && !isVowel(s[start])) {
                start++;
            }
            // Find the rightmost vowel
            while (end >= 0 && !isVowel(s[end])) {
                end--;
            }
            // Swap them if start is left of end
            if (start < end) {
                swap(s[start++], s[end--]);
            }
        }
        
        return s;
    }
};
