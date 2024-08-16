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
void solve(TreeNode* root,vector<vector<int>>&ans,vector<int>&v, int cs, int ts){
    if(!root){
        return ;
    }
    cs+=root->val;
    v.push_back(root->val);

solve(root->left,ans,v,cs,ts);
solve(root->right,ans,v,cs,ts);
    if(root->left==NULL&&root->right==NULL && cs==ts){
        ans.push_back(v);
        // return;
    }
  
    v.pop_back();
  


}



    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>>ans;
    vector<int>v;
    int cs=0;
    solve(root,ans,v,cs,targetSum);
    return ans;
    }
};