class Solution {
    public int numberOfSteps(int num) {
      int ans=0;
        
        while(num!=0)
        {
            if(num%2==0)
            {
                num=num/2;
                ans=ans+1;
            }
            else{
                num=num-1;
                ans=ans+1;
            }
            
            
            
        }
        
        
        return ans;
        
    }
}