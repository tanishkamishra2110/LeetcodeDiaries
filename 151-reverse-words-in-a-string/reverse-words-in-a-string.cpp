class Solution {
public:
    string reverseWords(string s) {
        string sr;
        int ans =0;
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]== ' '){
                continue;
            }
            else{
                ans++;
            }
        }
        cout<<ans;
        int a=0;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' ' && st.empty()){
                continue;
            }
            if(s[i]!=' '){
                st.push(s[i]);
            }
            else{
                while(!st.empty()){
                     sr+=st.top();
                st.pop();
                a++;
                
                }
                 if(a!=ans){
                    sr += ' ';
                }
               
            }
        }
        while(!st.empty()){
            sr += st.top();
            st.pop();
        }
        return sr;

    }
};