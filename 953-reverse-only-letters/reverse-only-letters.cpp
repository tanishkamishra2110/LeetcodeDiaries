class Solution {
public:
    string reverseOnlyLetters(string s) {
       stack<char>st;                 //stack to store the letters 

        for(int i=0;i<s.size();++i){
            if(isalpha(s[i]))          //push to stack if a letter
                st.push(s[i]);      
        }

        for(int i=0;i<s.size();++i){
            if(isalpha(s[i])){          
                s[i]=st.top();       //replace the letter in place using the stack
                st.pop();
            }
        }

        return s;
    }
};