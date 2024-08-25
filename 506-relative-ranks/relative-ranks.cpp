class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans(score.size(),"");
       
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        int c=1;
        while(!pq.empty()){
 string s;
   if(c==1){
    s="Gold Medal";
   }
   else if(c==2)s="Silver Medal";
    else if(c==3)s="Bronze Medal";
    else{
        s=to_string(c);
    }


       auto temp = pq.top();
       pq.pop();
       int x = temp.second;
       ans[x]=s;
       c++;
        }
        return ans;
    }
};