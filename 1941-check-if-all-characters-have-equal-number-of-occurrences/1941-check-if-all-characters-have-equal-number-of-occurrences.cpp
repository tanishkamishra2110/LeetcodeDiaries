class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>um;
     
        int m=0;
        for(int i=0;i<s.length();i++){
               int c=1;
            for(int j=i+1;j<s.length();j++)
            if(s[i]==s[j]){
                c++;
                
            }
            m = max(m,c);
        }
        for(int i=0;i<s.length();i++){
            um[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            char h=s[i];
            if(um.find(h)!=um.end()){
                auto temp=um.find(h);
                if(temp->second!=m){
                    return false;
                }
                
            }
        }
       return true; 
    }
};