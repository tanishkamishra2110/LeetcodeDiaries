class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0;
        int r=0;
        int c =0;
        for(int i=0;i<s.length();i++){
            
            if(l==r){
                c++;
            }
            
            if(s[i]=='L'){
                l++;
            }
            else if(s[i]=='R'){
                r++;
            }
        }
       return c; 
    }
};