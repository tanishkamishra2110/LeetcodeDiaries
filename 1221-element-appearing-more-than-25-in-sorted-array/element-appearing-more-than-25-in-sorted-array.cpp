class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
         int n = arr.size() ; 

        unordered_map<int, int> mp ; 
        for (int i = 0 ; i < n ; i ++)
        {
            mp[arr[i]] ++ ; 
        }

        for (auto i : mp)
        {
            if (i.second > (n / 4))
            {
                return i.first ; 
            }
        }
        return -1 ; 
    }
};