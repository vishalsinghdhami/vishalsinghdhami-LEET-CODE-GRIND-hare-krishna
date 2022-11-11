class Solution {
public:
    string removeOuterParentheses(string s) {
        //through stack
        stack<char>stk;
    int n = s.size(), i=0;
        string str,temp;
        while(i<n){
            char ch = s[i++];
            if(ch=='('){
                stk.push(ch);
                temp.push_back(ch);
            }else{
                stk.pop();
                temp.push_back(ch);
            }
            if(stk.empty()){
                str+=temp.substr(1,temp.size()-2);
                temp="";
            }
        }
        return str;
    
    }
};