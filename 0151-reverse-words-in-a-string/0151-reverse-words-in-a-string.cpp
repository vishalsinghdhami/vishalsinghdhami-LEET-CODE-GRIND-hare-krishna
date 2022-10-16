class Solution {
public:
    string reverseWords(string s) {
        //1//step //Remove spaces from the beginning and end
        while(s[0] == ' ') {s.erase(0, 1);} 
        while(s[s.size()-1]==' ') {s.erase(s.size()-1);} 
     
        //2//step//count no of spaces as we have to give only one space b/w words in ans string
          int i = 0, space_count = 0;

        while(s[i])
        {
		
		   /*if the character is not space, then this is the starting of a new word. 
		   So, make the space count 0.*/
		   
            if(s[i] == ' ') space_count++;
            else space_count = 0; 
            if(space_count > 1) //more than one space found
            {
                s.erase(i,1);
                continue;
            }
            i++;
        }
        //3// reverse complete string
         reverse(s.begin(),s.end());
        
        //4//reverse individual words  // space found means we have a word in our left and we have to reverse it
        int left = 0;
        for(i=1;i<s.size();i++)
        {
            if(s[i] == ' ') 
            {
                reverse(s.begin()+left, s.begin()+i);
                left = i+1;
            }
            else if(i == s.size()-1)
            {
                reverse(s.begin()+left, s.begin()+i+1);
            }
        }
        
        return s;
        
    }
};