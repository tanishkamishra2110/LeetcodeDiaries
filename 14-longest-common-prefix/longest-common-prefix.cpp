class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //pehle sort kardo to easily get longest and smallest string
       sort(strs.begin(), strs.end());
       string ans= "";
       //now compare only 1 ans last
       int n = strs.size();
       string ones = strs[0];
       string ls = strs[n-1];
       for(int i = 0;i<ones.size();i++){
        if(ones[i]==ls[i]){
            ans+=ones[i];
        }
        else{
            break;
        }
       }
       return ans;
    }
};