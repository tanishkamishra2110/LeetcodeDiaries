class Solution {
public:

void check(string s, int indice, char x, vector<int>&v){
    for(int i=0;i<s.length();i++){
        if(s[i]==x){
            v.push_back(indice);
            break;
        }
    }
}

    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        string test="";
        for(int i=0;i<words.size();i++){
            test = words[i];
            check(test, i, x, v);
        }
        return v;
    }
};