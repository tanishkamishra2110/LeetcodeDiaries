class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>charToIndexs(128);
        vector<int>charToIndext(128);
        for(int i=0;i<s.length();i++){
            if(charToIndexs[s[i]]!=charToIndext[t[i]]){
                return false;
            }
            charToIndexs[s[i]]=i+1;
            charToIndext[t[i]]=i+1;
        }
        return true;
        }
    
};