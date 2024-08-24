class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>> pq;
        unordered_map<char, int> m;
        string ans = "";
        for (auto x:s) {
            m[x]++;
        }
        for (auto x : m) {
            char ch = x.first;
            int c = x.second;
            pq.push({c,ch});}
            // string ans="";
             if((pq.top().first)>ceil(s.size()/2.0))
        {
            return "";
        }
            while(pq.size()>1){
                auto temp = pq.top();
                pq.pop();
                auto temp2 = pq.top();
                pq.pop();
                // char a = temp.first;
                
                // char b = temp2.first;
                ans+=temp.second;
                ans+=temp2.second;
                temp.first--;
                temp2.first--;
                if(temp.first>0){
                    pq.push(temp);
                }
                 if(temp2.first>0){
                    pq.push(temp2);
                }
            }
            if(pq.size()>0)
        {
            auto last = pq.top();

            ans+=last.second;
        }

        return ans;


    }
};