class Solution {
public:
    int splitNum(int num) {
        vector<int>v;
        while(num>0){
            int r = num%10;
            v.push_back(r);
            num=num/10;
            
        }
        sort(v.begin(),v.end());
        int n= v.size();
      int n1=0;
      int n2=0;
    
        for(int i=0;i<n;i++){
          if(i%2==0){
              n1=(n1*10)+v[i];
          }
          else{
              n2=(n2*10)+v[i];
          }
        }
        return n1+n2;
    }
};