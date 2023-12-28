class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int mco=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                c++;
            }
            if(nums[i]==0){
                mco=max(c,mco);
                c=0;
            }
        }
        return max(mco,c);
    }
};