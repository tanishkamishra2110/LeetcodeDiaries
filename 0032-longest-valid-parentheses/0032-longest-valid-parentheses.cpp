class Solution {
public:
    int longestValidParentheses(string s) {
         stack<int>st;
        int ml=0;
        st.push(-1);
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            st.push(i);
            else
            {
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                else
                {
                    int len=i-st.top();
                    ml=max(ml,len);
                }
            }
        }
        
        return ml;
    }
};