class Solution {
public:
    string removeDuplicates(string s) {
      /*   string ans ="";
        int i = 0;
for(int i=0;s[i]!='\0';i++) {
           if( ans.length() > 0  &&  ans[ans.length() - 1] == s[i]) {
                    ans.pop_back();
                }
                else {
                    ans.push_back(s[i]);
                } 
           
        }
        return ans;*/
        stack<char>st;
        for(auto c:s){
            if(!st.empty()&&st.top()==c){
              st.pop();
            }
            else{
                st.push(c);
            }

        }
            string ans;
            while(!st.empty()){
                char t = st.top();
                ans.push_back(t);
                st.pop();
            }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};