class Solution {
public:
    bool isIsomorphic(string s, string t) {
      /*  vector<int>charToIndexs(128);
        vector<int>charToIndext(128);
        for(int i=0;i<s.length();i++){
            if(charToIndexs[s[i]]!=charToIndext[t[i]]){
                return false;
            }
            charToIndexs[s[i]]=i+1;
            charToIndext[t[i]]=i+1;
        }
        return true;*
        }*/

      unordered_map<char,char>m1;
      unordered_map<char,char>m2;
      int n= t.length();
      for(int i=0;i<n;i++){
          char ss=s[i];
          char tt=t[i];
          if(m1.find(ss)==m1.end()&&m2.find(tt)==m2.end()){
              m1[ss]=tt;
              m2[tt]=ss;
          }
          else {
            if(m1[ss]!=tt||m2[tt!=ss]){
                return false;
            }
      }
      }
return true;}








    
    
};