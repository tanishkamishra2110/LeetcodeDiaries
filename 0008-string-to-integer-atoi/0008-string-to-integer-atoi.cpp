class Solution {
public:
    int myAtoi(string s) {
       //we need to handle 3 cars
       //ignore the white spaces
       //keep a check of sign + or -
       //check after removing spaces and determining sign if
       //if the next element is digit or not
       int num=0;
       int i=0;
       int sign = 1;//initially +ve
       while(s[i]==' ') {
           i++;
       }
       if(i<s.size()&&(s[i]=='+'||s[i]=='-')){
           if(s[i]=='-'){
               sign = -1;
           }
           else{
               sign = 1;
           }
i++;
       }
       while(i<s.size()&&isdigit(s[i])){
           if(num>INT_MAX/10||(num==INT_MAX/10&&s[i]>'7')){
              if(sign==-1){
                  return INT_MIN;
              } 
              else{
                  return INT_MAX;
              }

           }
           num = num*10 + (s[i]-'0');
           i++;
       }

return num*sign;
    }
};