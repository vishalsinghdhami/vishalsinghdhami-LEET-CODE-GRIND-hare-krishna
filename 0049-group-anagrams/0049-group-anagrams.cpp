class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
    vector<vector<string>>ans;
    unordered_map<string,vector<string>>m;
   
     
    for(auto& x:strs)
    {
        string z=x;
        sort(z.begin(),z.end());
        m[z].push_back(x);
    }
    for(auto& y:m)
       {
           ans.push_back(y.second);
       }
    return ans;
    }
};