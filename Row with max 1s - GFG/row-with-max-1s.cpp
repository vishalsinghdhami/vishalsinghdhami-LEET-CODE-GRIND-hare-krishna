//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // row return krni hae max 1 vli
	    int rowans=-1;
	     int max1=-1;
	    for(int i=0;i<n;i++)
	    {     int tempmax1=-1;
	        for(int j=0;j<m;j++)
	        { 
	          if(arr[i][j]==1)
	          {
	              tempmax1++;
	          }
	        }
	    
	        if(tempmax1>max1){
	            max1=tempmax1;
	            rowans=i;
	        }
	    }
	    
	    return rowans;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends