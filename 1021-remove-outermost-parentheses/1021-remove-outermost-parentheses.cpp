class Solution
{
    public:
        string removeOuterParentheses(string s)
        {
            stack<char> stck;
            string ans;
            for (char i: s)
            {
                if (i == '(')
                {
                    if (stck.size() > 0)
                    {
                        ans += i;
                    }
                    stck.push(i);
                }
                else
                {
                    if (stck.size() > 1)
                    {
                        ans += i;
                    }
                    stck.pop();
                }
            }
            return ans;
        }
};