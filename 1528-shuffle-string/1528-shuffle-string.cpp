class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
     vector<int>v;
        string ans=s;
        for(int i=0;i<s.length();i++){
            v.push_back(i);
        }
        
        for(int i = 0;i<indices.size();i++){
            if(v[i]!=indices[i]){
                //int t1 = v[i];
                int t2 = indices[i];
                ans[t2]=s[i];
               //swap(s[t1],s[t2]);
                //cout<<s<<endl;
            }
        }
        return ans;
    }
};