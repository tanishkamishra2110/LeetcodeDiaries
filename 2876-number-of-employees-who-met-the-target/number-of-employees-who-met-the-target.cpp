class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
         sort(hours.begin(),hours.end());
        int n=hours.size();
        for(int i=0;i<hours.size();i++){
            if(hours[i]<target){
                n--;
            }
            else{
                return n;
            }
        }
        return 0;

    }
};