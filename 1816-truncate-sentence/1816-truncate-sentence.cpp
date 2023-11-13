class Solution {
public:
    string truncateSentence(string s, int k) {
        string v;
        int m=0;
        for(int i=0;i<s.length();i++){
            if(m==k){
                break;
            }
            else if(s[i]==' '){
                m++;
                if(m!=k){
                v.push_back(s[i]);}
            }
            else{
                v.push_back(s[i]);
            }
            
        }
        return v;
    }
};