class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(),p.end());
        int c=0;
      int s=0; 
        int e = p.size()-1;
        while(s<=e){
            if(p[s]+p[e]<=limit){
                s++;
                e--;
            }
            else{
                e--;
            }
            c++;
        }
            
        
        return c;
    }

};