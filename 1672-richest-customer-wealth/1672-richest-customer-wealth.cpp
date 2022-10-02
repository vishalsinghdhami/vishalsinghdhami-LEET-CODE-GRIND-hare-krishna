class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int r= accounts.size();
        int c= accounts[0].size();
       // vector<int>v;
        int y=0;
        for(int i=0;i<r;i++)
        {
            int x=0;
           
            for(int j=0;j<c;j++)
            {
                x+=accounts[i][j];
            }
            
            //v.push_back(x);
            
            if(x>y){
                y=x;
            }
        }
        
         // return(*max_element(v.begin(), v.end()));      
        return y;
    }
};