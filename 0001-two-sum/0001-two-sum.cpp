class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>newarr;
       for(int i=0;i<nums.size();i++)   {

           for(int j=i+1;j<nums.size();j++){
             
               if(nums[i]+nums[j]==target){
                   newarr.push_back(i);
                   newarr.push_back(j);
                   break;
               }

           }}
         return newarr;         
    }
};