class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int c = nums[n-1];
        int v = nums[n-2];
        int res = (c-1)*(v-1);
        return res;
    }
};