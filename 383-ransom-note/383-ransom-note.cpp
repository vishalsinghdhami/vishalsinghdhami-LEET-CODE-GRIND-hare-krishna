class Solution {
public:
    bool canConstruct(string r, string m) {
     //R BNANA HAE M SAE
        unordered_map<char,int> store;
        for(int i=0;i<r.size();i++)
        {
            store[r[i]]++;
         
        }
        for(int i=0;i<m.size();i++)
        {
            
            store[m[i]]--;
        }
for(auto x:store)
{
    if(x.second>0)
    {
        return false;
    }
    
}
return true;
            
        
        
    }
};