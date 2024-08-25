class Solution {
public:
    int minimumOperations(vector<int>& nums) {
         priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < nums.size(); i++)
            pq.push(nums[i]);

        int count = 0;
        vector<int> temp;
        int x;
        while(!pq.empty()){
            if(pq.top()==0){
                pq.pop();
                continue;
            }
            else if(pq.top()!=0){
                x = pq.top();
                pq.pop();
            }
            else{
                break;
            }
            while(!pq.empty()){
                int ele= pq.top()-x;
                temp.push_back(ele);
                pq.pop();
            }
              for (int i = 0; i < temp.size(); i++) {
                if (temp[i])
                    pq.push(temp[i]);
            }
            temp.clear();
            count++;
        }
        return count;
    }
};