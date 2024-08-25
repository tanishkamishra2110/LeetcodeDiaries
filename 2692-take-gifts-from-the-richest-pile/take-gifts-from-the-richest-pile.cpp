class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long>pq;
        long long sum=0;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        while(k>0){
          
            long long  ele = sqrt(pq.top());
            pq.pop();
            pq.push(ele);
            k--;
        }
        while(pq.size()>0){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};