class Solution {
public:
    int countHomogenous(string s) {
         long long currentChar=s[0], ans=1, currentLength=1;
        long long mod=1000000007;
        for(int i=1;i<s.length();i++){
            if(s[i]==currentChar){
                ++currentLength;
                ans+=(currentLength%mod); 
            }
            else {
                currentChar=s[i];
                currentLength=1;
                ans+=(currentLength%mod);

            }
        }
        return ans%mod;
    }
};