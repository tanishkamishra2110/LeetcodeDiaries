class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
      int m=0;
      for(int i=0;i<sentences.size();i++){
          string s = sentences[i];
          int c =1;
          for(int i=0;i<s.length();i++){
              if(s[i]==' '){
                  c++;
              }
              m = max(m,c);
          }
      }
      return m;
    }
};