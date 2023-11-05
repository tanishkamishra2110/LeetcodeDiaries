class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
      int n = arr.size();
        int i=0, j=1, cnt=0;

        while(i<n && j<n){
            if(arr[i]>arr[j]){
                j++;cnt++;
            }else{
                i=j;
                j++; cnt=1;
            }

            if(cnt==k) {return arr[i];
            }
        }
       int maxi = *max_element(arr.begin(),arr.end());
        return maxi;   
    }
};