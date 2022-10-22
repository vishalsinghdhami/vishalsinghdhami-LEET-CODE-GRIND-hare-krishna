class Solution {
public:
    string minWindow(string s, string t) {
        

    
    int n=s.length();
int m=t.length();
string ans="";
unordered_map<char,int>mp2;
unordered_map<char,int>mp1;
for(auto it:t){
mp2[it]++;
}

    int i=0;
    int j=0;
    int count=0;
    
    while(true){
        bool f1=false;
        bool f2=false;
        
        while(i<n && count<m){
            
           // i++;
            
            mp1[s[i]]++;
            
            int val1=mp1[s[i]]++;
            int val2=mp2[s[i]]++;
            
            if(val1<=val2){
                count++;
            }
            i++;
            f1=true;
        }
        
        while(j<i && count==m){
            string pans=s.substr(j,i-j);
            
            if(ans.length()==0||pans.length()<ans.length()){
                ans=pans;
            }
            
          //  j++;
            
            if(mp1[s[j]]==1){
                mp1.erase(mp1[s[j]]);
            }
            else{
                mp1[s[j]]--;
            }
            
            int val1=mp1[s[j]];
            int val2=mp2[s[j]];
            
            if(val1<val2){
                count--;
            }
            j++;
            f2=true;
        }
        
        if(f1==false&&f2==false){
            break;
        }
    }
    return ans;

    }
};