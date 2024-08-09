class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int mf=INT_MIN;
        char mfc;
        for(auto it:mp){
            auto temp=it.second;
            if(temp>mf){
                mf=temp;
                auto x = it.first;
                mfc=x;
                
            }
            cout<<mfc<<": "<<mf<<endl;
        }
        int i=0;
        while(mf>0&&i<s.size()){
            s[i]=mfc;
            mf--;
            i+=2;
        }
        cout<<s;

        if(mf!=0){
            return "";
        }
       mp.erase(mfc);
       for(auto it:mp){
        auto f = it.second;
        auto uu = it.first;
        cout<<f<<endl;
        while(f>0){
            i = (i>=s.size()) ? 1:i;

            s[i]=uu;
            cout<<s[i]<<endl;
            i+=2;
            f--;
        }
       }
       return s;
    }
};