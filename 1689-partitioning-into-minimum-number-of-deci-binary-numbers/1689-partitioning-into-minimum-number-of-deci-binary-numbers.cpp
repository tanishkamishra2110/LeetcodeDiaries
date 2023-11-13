class Solution {
public:
    int minPartitions(string n) {
      sort(n.begin(),n.end());
        int x = n[n.length()-1];
        return x-48;
    }
};