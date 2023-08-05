class Solution {
public:
    char repeatedCharacter(string s) {
             map<char,int> map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
            for(auto it:map){
                if(it.second >1){
                    return it.first ;
                }

            }

        }
        return 1;
   
    }
};