class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int rs = grid.size(); //row ka size
        int cs = grid[0].size();// col ka size
        vector<vector<int>>ans;
        for(int i=0;i<rs-2;i++){
            vector<int>v;
            for(int j=0;j<cs-2;j++){
                int v1 = max({grid[i][j] , grid[i][j+1] , grid[i][j+2]});
                int v2 = max({grid[i+1][j] , grid[i+1][j+1] , grid[i+1][j+2]});
                int v3 = max({grid[i+2][j] , grid[i+2][j+1] , grid[i+2][j+2]});
                int mxc = max({v1,v2,v3});
                v.push_back(mxc);
            }
            ans.push_back(v);

        }
        return ans;
    }
};