class Solution
{
    int dprecursive(int n, int db[])
    {
        if (n <= 1)
        {
            return db[n]=n;
        }
        if(db[n]!=-1){
            return db[n];
        }
        
        int ans= dprecursive(n-1,db) +dprecursive(n-2,db);
        
        return db[n]=ans;
    }
    
    
    
    int recursive(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        int ans = recursive(n - 1) + recursive(n - 2);

        return ans;
    }

    public: int fib(int n)
    {
        int db[n+1];
        for(int i=0;i<=n;i++){db[i]=-1;}
        return dprecursive(n, db);
       	//   return  recursive (n);
    }
};