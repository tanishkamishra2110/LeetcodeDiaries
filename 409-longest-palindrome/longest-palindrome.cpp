class Solution {
public:



    int longestPalindrome(string s) {
        map<char,int>mp;
        int n = s.length();
      
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){
            return n;
        }
        int ans=0;
        int f=0;
        for(auto it:mp){
            auto t = it.second;
            if(t%2==0){
                ans+=it.second;
            }
            else{
                int c=t-1;
                ans+=c;
                f=1;
            }
        }
        if(f==1){
            ans++;
        }
        return ans;
    }
};