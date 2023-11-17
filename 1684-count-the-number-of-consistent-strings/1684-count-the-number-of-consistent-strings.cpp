class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
       
        int count=0;
        for(auto str:words){
             int c=0;
            for(auto i:str){
                if(allowed.find(i)==string::npos){
                    c=1;
                    break;
                }
            }
            if(c!=1){
                count++;
            }
        }
        return count;
    }
};