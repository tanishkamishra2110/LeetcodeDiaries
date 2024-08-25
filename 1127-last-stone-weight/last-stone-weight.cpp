class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for (int i=0;i<stones.size();i++){

        pq.push(stones[i]);
    }
// inr=t f=1;
        while(pq.size()>1){
            int y = pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            int k;
            if(x==y){
                // f=0;
                continue;
            }
            else{
                k = y-x;
                // pq.push(x);
                pq.push(k);
            }
        

        }
        if(!pq.empty()){
            return pq.top();
        }
        return 0;
    }
};