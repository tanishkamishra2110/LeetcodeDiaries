class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int left = INT_MAX, right = INT_MIN,ans = -1;
     for(int i = 0; i < bloomDay.size(); i++){
       left = min(left, bloomDay[i]);
       right = max(right, bloomDay[i]);
     }
     cout << left << endl;
     cout << right << endl;
     while(left <= right){
       int mid = left + (right - left) / 2;
       int flowers = 0, bouquets = 0;
       for(int i = 0; i < bloomDay.size(); i++){
         if(bloomDay[i] <= mid){
           flowers++;
         } else {
           flowers = 0;
         }
         if(flowers == k){
           bouquets++;
           flowers = 0;
         }
         if(bouquets == m) break;
       }
       if(bouquets < m) left = mid + 1;
       else {
       ans = mid;
       right = mid - 1;
       }
     }
     return ans;
    }
};