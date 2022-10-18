//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> arr)
	{ vector<int> ans;
	//upper half
	for(int i=0;i<n;i++)  //i mtlbh column
	{
	    int row=0,col=i;
	    while(col>=0)
	    {
	        ans.push_back(arr[row][col]);
	        row++;col--;
	    }
	    
	}
	//lower half
	for(int i=1;i<n;i++)
	{
	    int row=i,col=n-1;
	    while(row<n)
	    {
	        ans.push_back(arr[row][col]);
	        row++;col--;
	    }
	}
	
	return ans;
	
	
	// vector<int>ans;  //o(n)
    //   for(int i=0;i<2*n-1;i++)
    //   {for(int j=0;j<n;j++)
    //       {for(int k=0;k<n;k++)
    //           {if(i==j+k)
    //               {
    //                   ans.push_back(arr[j][k]);
    //               }}
    //           }
    //     }
    //   return ans;
    
    
     }
};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends