class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> ans;
        int n = potions.size();
        for(long long s: spells){
            int start = 0, end = n-1;
            int idx = n;
            while(start<=end){
                int mid = (start+end)/2;
                if (s*potions[mid] >= success){
                    idx = mid;
                    end = mid-1;
                }else{
                    start = mid+1;
                }
            }
            ans.push_back(n-idx);
        }
        return ans; 
    }
};