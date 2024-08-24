// class node{
//     public:
//     int data;
//     int row;
//     int col;

//     node(int d, int r, int c) {
//         data = d;
//         row = r;
//         col = c;
//     }
// };

// class compare{
//     public:
//     bool operator()(node* a, node* b) {
//         return a->data > b->data;
//     }
// };
 
class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int,pair<int,int>>>> minHeap;
        int k = nums.size();
        for(int i=0; i<k; i++) {
            int element = nums[i][0];
            maxi = max( maxi, element);
            mini = min(mini, element);
            minHeap.push({element,{i,0}});
        }

        int ansStart = mini;
        int ansEnd = maxi;


        while(!minHeap.empty()) {
            
            auto top = minHeap.top();
            int topelement = top.first;
            int topRow = top.second.first;
            int topCol = top.second.second;
            minHeap.pop();

            //mini updated
            mini = topelement;

            //check for answer
            int currRange = maxi-mini;
            int ansRange = ansEnd - ansStart;
            if(currRange < ansRange) {
                ansStart = mini;
                ansEnd = maxi;
            }

            //check for new element in the same list
            if(topCol + 1 < nums[topRow].size()) {
                maxi = max( maxi , nums[topRow][topCol+1]);
                // node* newNode = new node();
                minHeap.push({nums[topRow][topCol+1],{ topRow, topCol+1}});
            }
            else {
                //there is no element int the same array or list
                break;
            }
        }

        vector<int> ans ;
        ans.push_back(ansStart);
        ans.push_back(ansEnd);
        return ans;




    }
};







