class Solution {
public:

void solve(vector<int>&nums,int index, int &sumx , int x){
    if(index>=nums.size()){
       sumx+=x;
       cout<<sumx;
       return;
    }
    
   solve(nums,index+1, sumx, x^nums[index]);
   solve(nums,index+1, sumx, x);
   

}
    int subsetXORSum(vector<int>& nums) {
     int sumx=0;
      int index=0;
      int x=0;
      solve(nums,index, sumx, x)  ;
      return sumx;
    }
};