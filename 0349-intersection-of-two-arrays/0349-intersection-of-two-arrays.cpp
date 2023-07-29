class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            s.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            int k=nums2[i];
            if(s.find(k)!=s.end()){
                   ans.push_back(k);
                   s.erase(k);
            }
        }
        return ans;
    }
};