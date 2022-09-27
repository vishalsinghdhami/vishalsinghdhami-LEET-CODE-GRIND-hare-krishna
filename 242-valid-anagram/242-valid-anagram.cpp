class Solution {
public:
    bool isAnagram(string s, string t) {
        
      //  t is an angaram of s
        //anagram is formed by original string
        
        unordered_map<char,int>m;
        
        for(int i=0;i<t.size();i++)
        {
            m[t[i]]++;
        }
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]--;
        }
        
        bool ans=true;
        for(auto x:m)
        {
            if(x.second!=0)
            {
                ans=false;
            }
                
            }
        return ans;
        
    }
};