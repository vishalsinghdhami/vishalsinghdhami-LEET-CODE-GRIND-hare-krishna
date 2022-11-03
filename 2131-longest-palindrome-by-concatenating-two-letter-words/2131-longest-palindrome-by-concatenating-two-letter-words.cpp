class Solution {
public:
    int longestPalindrome(vector<string>& words) {
     map<string,int>mp;
     int len = 0;//for nontwins
     int ans = 0;//for twins
     bool flag = false;
     for(auto word : words)
     {
         mp[word]++;
     }
     for(auto x : mp)
     {
         if(x.first[0] == x.first[1])//twins check
         {
             if(x.second % 2 == 1)
             {
                 flag = true;
                 len+=(x.second-1);
             }
             else
             {
                 len+=x.second;
             }
              mp.erase(x.first);
         }
         else
         {
             string str = x.first;
             string revstr=x.first;
             reverse(revstr.begin(),revstr.end());
             if(mp.find(revstr)!=mp.end())
             {
                 ans+=min(mp[revstr],x.second)*4;
             }
             mp.erase(revstr);
             mp.erase(str);
         }
     }
        if(flag)
         {
           return ans+ (len*2+2);  
         }
         return ans+(len*2);
    }
};