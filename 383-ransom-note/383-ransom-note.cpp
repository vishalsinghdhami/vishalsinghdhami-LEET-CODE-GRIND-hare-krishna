class Solution {
public:
    bool canConstruct(string r, string m) {
     //R BNANA HAE M SAE
        unordered_map<char,int> store;
     //storing  ransom chars in map 
        for(int i=0;i<r.size();i++)
        {
            store[r[i]]++;
         
        }
      //substracting magazine chars
       // logic: if all chars of ransom will be present in magazine then all inputs of map will become negative zero...else some indexes value will remain positive 
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