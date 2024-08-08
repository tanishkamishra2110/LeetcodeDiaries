class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
       int n=nums1.size();
        int m=nums2.size();
        int c=0;
        for(int i=0;i<m;i++)nums2[i]*=k;
         for(int i=0;i<n;i++)
         {
              for(int j=0;j<m;j++)
              {
                  if(nums1[i]%nums2[j]==0)c++;
              }
         }
        return c;

    }
};