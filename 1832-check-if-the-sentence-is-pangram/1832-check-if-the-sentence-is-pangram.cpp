class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int>mp;
        if(sentence.length()<26){
            return false;
        }
       for(auto itr:sentence){
           mp[itr]++;
       }
       if(mp.size()==26){
           return true;
       }
       return false;
    }
};