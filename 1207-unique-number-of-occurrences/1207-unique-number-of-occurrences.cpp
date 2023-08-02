class Solution {
public:

 
 
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> ump;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            ump[arr[i]]++;
        }
        for( auto x:ump){
           ans.push_back(x.second);
        }
         unordered_map<int,int> N;
        for(int i=0;i<ans.size();i++)
            N[ans[i]]++;
        for(auto x:N)
            if(x.second>1)
                return false;
        return true;
      
    }
};