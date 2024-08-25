class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(auto i:nums){
            pq.push(i);
        }
        int ans=0;
        int c=0;
      
            int x = pq.top()-1;
            pq.pop();
            int y=pq.top()-1;
            pq.pop();
            ans = x*y;
           return ans;   
        
    }
};