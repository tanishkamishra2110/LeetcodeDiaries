class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>um;
        int s=0;
        for(int i=0;i<nums.size();i++){
            um[nums[i]]++;
        }
        for(auto itr:um){
            if(itr.second==1){
              int v = itr.first;
              s=s+v;
            }
        }
        return s;
    }
};