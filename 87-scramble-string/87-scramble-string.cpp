class Solution {
public:
	vector<vector<vector<vector<int>>>>dp;
	int solve(string &first,string &second,int fs,int fe,int ss,int se)
	{
		int n=fe-fs+1;
		int m=se-ss+1;
		if(first.substr(fs,n)==second.substr(ss,m))
			return 1;

		if(n<=1||m<=1)
			return 0;

		if(dp[fs][fe][ss][se]!=-1)
			return dp[fs][fe][ss][se];

		bool ans=false;
		for(int k=1;k<n;k++)
		{
			//without swap
			//left left
			// int temp1=solve(first,second,fs,fs+k-1,ss,ss+k-1);
			//right right
			// int temp2=solve(first,second,fs+k,fe,ss+k,se);
			if(solve(first,second,fs,fs+k-1,ss,ss+k-1)&&solve(first,second,fs+k,fe,ss+k,se))
			{
				ans=true;
				break;
			}
			//with swap
			//left right
			// temp1=solve(first,second,fs,fs+k-1,ss+n-k,se);
			//right left
			// temp2=solve(first,second,fs+k,fe,ss,ss+n-k-1);
			if(solve(first,second,fs,fs+k-1,ss+n-k,se)&&solve(first,second,fs+k,fe,ss,ss+n-k-1))
			{
				ans=true;
				break;
			}
		}
		return dp[fs][fe][ss][se]=ans;  
	}

	bool isScramble(string s1, string s2) {
		int n=s1.size();
		int m=s1.size();
		dp.resize(n,vector<vector<vector<int>>>(n,vector<vector<int>>(m,vector<int>(n,-1))));
		return solve(s1,s2,0,s1.size()-1,0,s2.size()-1);
	}
};