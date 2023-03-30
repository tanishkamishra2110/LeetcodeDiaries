class Solution {
public:
bool ispossol(vector<int>& weights, int n, int days, int maxweight){
    //ya max weight ya usse kam it should not be more
    int weightsum=0;
    int countofdays=1;
     for(int i=0;i<weights.size();i++){
            if(weightsum+weights[i]<=maxweight){
                weightsum+=weights[i];
            }
            else{
                countofdays++;
                weightsum = 0;
                if(weights[i]>maxweight || countofdays>days){
                    return false;
                }
                weightsum += weights[i];
            }
        }
        return true;}
   /* for(int i=0;i<n;i++){
        if(weights[i]>maxweight){
            return false;
        }
        else{
            if(weightsum+weights[i]>maxweight){
                countofdays++;
                weightsum = weights[i];
                if(countofdays>days){
                    return false;
                }
                else{
                    weightsum = weightsum+weights[i];
                }
            }
        }
    }

return true;
}*/
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size()-1;
        int s=0;
        int sum=0;
        int ans=0;
        //if(days>n){
            //return -1;
       // }
        for(int i=0;i<weights.size();i++){
            sum=sum+weights[i];
        }
        int e=sum;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(ispossol(weights,n,days,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }

        }
       return ans; 
    }
};