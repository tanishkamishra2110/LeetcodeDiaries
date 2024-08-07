class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxsum=0;
        for(auto x: accounts){
            int cs=0;
            for(int b:x){
                cs=cs+b;
            }
            if(cs>maxsum){
                maxsum=cs;
            }
        }
        return maxsum;
    }
};