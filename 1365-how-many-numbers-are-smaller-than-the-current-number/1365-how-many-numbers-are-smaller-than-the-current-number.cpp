class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n= nums.size();
       // int c=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(nums[j]<nums[i]){
                    c++;
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};