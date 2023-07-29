class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>ans;
        unordered_map<int,int>um;
       for(int i=0;i<nums.size();i++){
           
           um[nums[i]]++;
           
       }

  for( int i=0;i<nums.size();i++){
      auto itr = um.find(nums[i]);
      int k = itr->first;
      int v = itr->second;
      int p= target-k;
      if(p==k){
          if(v>1){
              ans.push_back(i);
          }
      }
      else{
          if(um.find(p)!=um.end()){
              ans.push_back(i);
          }
      }
  }      
        
        
        
         return ans;         
    }
};