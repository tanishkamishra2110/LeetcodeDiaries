class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
            string v="";

        for(auto i:words){
            v.push_back(i[0]);
        }
        
       if(s==v)
       {
           return true;
       }else
       {
        return false;
       }
    }
};