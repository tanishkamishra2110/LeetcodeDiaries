class Solution {
public:
    string finalString(string s) {
        int n=s.length();
        string ans="";
       for(int i=0;i<s.length();i++){
           
           if(s[i]=='i'){
               reverse(ans.begin(),ans.end());
           }
           else{ans.push_back(s[i]);}
       } 
        return ans;
    }
};