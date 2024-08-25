class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        //we will use 2 pq
        //even ki and odd ki 
        priority_queue<int>even,odd;
        //pushkaro ek me even odd me add nums
        for(int i=0;i<s.size();i++){
            if(s[i]%2==0){
                even.push(s[i]);
            }
            else{
                odd.push(s[i]);
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]%2==0){
                s[i]=even.top();
                even.pop();
            }
            else{
                s[i]=odd.top();
                odd.pop();
            }
        }
        num=stoi(s);
        return num;
    }
};