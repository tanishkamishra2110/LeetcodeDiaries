class Solution {
public:
    
    bool isvowel(char st){
        if(st=='A'||st=='E'||st=='I'||st=='O'||st=='U'||st=='a'||st=='e'||st=='i'||st=='o'||st=='u'){
            return true;
        }
        return false;
    }
    
    string sortVowels(string s) {
        string str="";
        int n = s.length();
        for(int i=0;i<n;i++){
            if(isvowel(s[i])==true){
                str.push_back(s[i]);
            }
        }
        cout<<str;
        sort(str.begin(),str.end());
        int j=0;
        for(int i =0;i<n;i++){
            if(isvowel(s[i])){
                s[i]=str[j];
                j++;
            }
        }
        return s;
        
    }
};