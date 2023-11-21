class Solution {
public:
    bool isAnagram(string s, string t) {
  map<char,int>mp;
        map<char,int>mpt;
        for(auto i:s){
            mp[i]++;
        }
          for(auto i:t){
            mpt[i]++;
        }
       if(mpt!=mp){
           return false;
       }
          
        return true;
    }
};