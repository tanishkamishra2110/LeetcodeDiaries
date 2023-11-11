class Solution {
public:
    string interpret(string command) {
        string s;
        for(int i=0;i<command.length();i++){
            if(command[i]=='G'){
                char c= command[i];
                s.push_back(c);
            }
            
             if(command[i]=='('&&command[i+1]==')'){
                char c= 'o';
                s.push_back(c);
            
             }
             if(command[i]=='('&&command[i+1]=='a'){
                char c= 'a';
                char d = 'l';
                s.push_back(c);
                 s.push_back(d);
            
             }
             }
        return s;
             }
    
};