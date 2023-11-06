class Solution {
public:
    int minimumSum(int num) {
        //pehle break karo num ko integers me then push it into vector
        vector<int> nums;
        while(num>0){
            int r = num%10;
            nums.push_back(r);
            num=num/10;

        }
        sort(nums.begin(),nums.end());

//array 4 digit ka hi hoga and the neccesary condition is to use all 4 digits
//aakhri wala cant start first so we have to pair it with the least toh sort karo aur least ko highest ke sath pair krdo (matlab sum) bche huye are bounded to pair with each other

        int num1 = nums[0]*10+nums[3];
        int num2 = nums[1]*10+nums[2];
        
    return num1+num2;

    }
};