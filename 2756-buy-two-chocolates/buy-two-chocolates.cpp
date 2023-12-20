class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
       
        int n = prices.size();
        int i=0;
        int cnt=0;
        int m=money;
          sort(prices.begin(), prices.end());
          while(i<n && m !=0){
           if(cnt==2){
               break;
           }
           if(prices[i]<=m){
               m=m-prices[i];
               cnt++;
           }

           i++;
          
       }
       if(cnt==2){
           return m;
       }else{
           return money;
       }
        
    }
};