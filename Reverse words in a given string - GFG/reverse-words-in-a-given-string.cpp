//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//O(1) SPACE SOLUTION
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { //1 reverse complete string;
         reverse(s.begin(),s.end());
        
        //2//reverse individual words  
        int left = 0;int i;
        for(i=1;i<s.size();i++)
        {   
            if(s[i] == '.') // space found means we have a word in our left and we have to reverse it
            {
                reverse(s.begin()+left, s.begin()+i);
                left = i+1;
            }
            else if(i == s.size()-1)//for the last word of string
            {
                reverse(s.begin()+left, s.begin()+i+1);
            }
        }
        
        return s;
        
        
        
        
        
        
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends