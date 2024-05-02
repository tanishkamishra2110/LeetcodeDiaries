class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int bp = INT_MAX;
       int opf=0;
       int pf = 0;
       int n= prices.size()-1;
       for(int i=0;i<prices.size();i++){
           if(prices[i]<bp){
               bp=prices[i];
               }
           pf = prices[i]-bp;
           opf = max(opf,pf);
           //if(pf>o){
               //opf=pf;
           //}
       }
       return opf;
       





}};