class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        //sabse pehle make a max pq
        priority_queue<int>pq;
        int sum=0;
       //jo sabse bada number hai arraay me usko kam karenge toh ans milega
       //sabse bada number using maxheap toh baar baar we will get the max heap
       for(int i=0;i<piles.size();i++){
        pq.push(piles[i]);
       }
       for(int i=0;i<k;i++){
        int tp = pq.top();
        pq.pop();
        tp-=tp/2;
        pq.push(tp);
       }
       while(!pq.empty()){
         sum+= pq.top();
         pq.pop();
        
       }
       return sum;
    }
};