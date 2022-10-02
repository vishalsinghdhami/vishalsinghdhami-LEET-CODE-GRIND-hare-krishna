class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int r= accounts.size();
        int c= accounts[0].size();
        vector<int>v;
        for(int i=0;i<r;i++)
        {
            int x=0;
            for(int j=0;j<c;j++)
            {
                x+=accounts[i][j];
            }
            
            v.push_back(x);
        }
        
          return(*max_element(v.begin(), v.end()));      
        
    }
};