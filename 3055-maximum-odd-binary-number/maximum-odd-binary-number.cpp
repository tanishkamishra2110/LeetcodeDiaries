class Solution {
public:
    string maximumOddBinaryNumber(string s) {
         string ans = "";
        int c= 0;
        //count krlo no. of ones
        for(int i = 0; i <s.length();i++) {
            if(s[i] == '1') {
                c++;
            }
        }
        //agar koi 1 nhi toh return kardo same string
        if(c==0){
            return ans;
        }
        for(int i=0;i<c-1;i++){
            ans.push_back('1');
            //push kardo 1's starting me wahi maximum numver denge but leave one for pushing at last to make it odd

        }
        for(int i = 0; i < s.length() - c;i++) {
            ans.push_back('0');
            //zero ka count will be equal to size-c
        }
        //push last onr
        ans.push_back('1');
        return ans;
    }
};