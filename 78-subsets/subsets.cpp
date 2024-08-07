class Solution {
public:

void solve(vector<int>nums, vector<vector<int>>&ans,vector<int>output,int index){
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }
    
    solve(nums,ans,output,index+1);// exclude wali step for example 1 dont include 1 in the first step and call so we get 2 or empty 
     output.push_back(nums[index]); // now push krdo 1
    solve(nums,ans,output,index+1);// including 1 into the subset
   

}
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>ans;
      vector<int>output;
      int index=0;
      solve(nums,ans,output,index)  ;
      return ans;
    }
};