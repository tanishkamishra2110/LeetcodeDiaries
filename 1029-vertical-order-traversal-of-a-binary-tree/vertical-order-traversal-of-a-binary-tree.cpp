/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        queue<pair<TreeNode*, pair<int,int>>>q;
        //q will store the current node along with its coordinates for {1(0,0)}
        q.push({root,{0,0}});

        //make a map to store the col,row(top-bottom) with the data at those coordinates 
        map<int, map<int, multiset<int>>>mp; // col-> (row:[x,y,x..])
        //col which will vary and row num  which will be same for a certain data levels
        //multiset because we need to store in sorted order
        while(!q.empty()){
            auto front = q.front();
            q.pop();
            TreeNode*root = front.first; //root
            auto coordinates = front.second ;// value of (row,col)
            int row = coordinates.first;
            int col = coordinates.second;
            mp[col][row].insert(root->val);
            if(root->left){
                q.push({root->left, {row+1, col-1}});//question me hai ye
            }
            if(root->right){
                q.push({root->right, {row+1, col+1}});//question me hai ye
            }

        }
        //store final values
        for(auto it:mp){
            auto colmap = it.second;
            vector<int>v;
            for(auto cm : colmap){
                auto set = cm.second;
                //not using for loop on set instead using insert in vector
                v.insert(v.end(), set.begin(), set.end());
            }
            ans.push_back(v);
        }
return ans;
    }
};