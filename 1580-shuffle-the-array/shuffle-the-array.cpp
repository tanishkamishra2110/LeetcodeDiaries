class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(x==0){
                v.push_back(nums[i]);
                x=1;
                i--;
            }
            else{
                v.push_back(nums[n+i]);
                x=0;
            }
        }
        return v;

    }
};