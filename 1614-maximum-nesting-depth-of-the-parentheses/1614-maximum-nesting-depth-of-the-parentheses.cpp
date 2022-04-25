class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxi = 0;
        
        for(int i = 0; i < s.length(); i++) {
		// if the element is an open parantheses, we add it to the stack
            if(s[i] == '(') {
                st.push(i);
            }
			// else we find the current size of the stack and 
			//pop the last open parantheses.
            else if(s[i] == ')') {
                int n = st.size();
                maxi = max(maxi, n);
                st.pop();
            }
        }
        return maxi;
    }
};