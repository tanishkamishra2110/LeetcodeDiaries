class Solution {
public:
    string longestDiverseString(int a, int b, int c) {

    priority_queue<pair<int,char>>pq;
        if(a>0){
         pq.push({a,'a'});
        }
        if(b>0){
         pq.push({b,'b'});
        }
        if(c>0){
         pq.push({c,'c'});
        }
        string ans="";
        while(pq.size()>1){
            auto temp = pq.top();
            pq.pop();
            auto temp2=pq.top();
            pq.pop();
           if(temp.first>=2){
            ans+=temp.second;
            ans+=temp.second;
            temp.first-=2;
            // temp.first--;
           }
           else{
            ans+=temp.second;
            temp.first--;
           }
          
          if(temp2.first>=2 && temp2.first>=temp.first){
             ans+=temp2.second;
            ans+=temp2.second;
            temp2.first-=2;
            // temp2.first--;
          }
          else{
            ans+=temp2.second;
            temp2.first--;
          }
           if(temp.first>0){
            pq.push(temp);
           }
            if(temp2.first>0){
            pq.push(temp2);
           }
        }
        if(pq.size()==1){
             auto temp = pq.top();
            pq.pop();
            if(temp.first>=2){
             ans+=temp.second;
             ans+=temp.second;
            temp.first-=2;}
            else{
                ans+=temp.second;
                temp.first--;
            }
        }
        return ans;
    }
};