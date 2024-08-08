class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>b;
        auto maxe = max_element(candies.begin(), candies.end());
       for (auto x: candies){
        int z = x+extraCandies;
        if(z>=*maxe){
            b.push_back(true);
        }
        else{
            b.push_back(false);
        }
       }
       return b;
    }
};