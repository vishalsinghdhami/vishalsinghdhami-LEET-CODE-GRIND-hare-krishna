class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int n = str.size();
        if(n==0) return "";
        
        string ans  = "";
        //hint : saaro mae sae common chaiye
        //agr string sort krdi tou sbe chto string aaegi aur sbsi bdi sbse piche tou esliye 1st ko last mae jo common hoga offcourse bich vli mae bhi common hoga
        sort(str.begin(),str.end());
        
        string a = str[0];
        string b = str[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
        
    }
};
