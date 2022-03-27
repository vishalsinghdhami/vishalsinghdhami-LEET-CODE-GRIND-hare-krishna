class Solution {
public:
     
    
    int fib(int n) {
        
        if(n<=1)
        {
            return n;
        }
        
      
        int v[31];
        for(int i=0;i<31;i++){
           v[i]=-1; 
        }
        if(v[n]!=-1)
        {
            
            return v[n];
        }
            
        v[n]=(fib(n-1)+fib(n-2));
        return v[n];
        
        
    }
};


