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
int ans=0;
void solve(TreeNode* root, long long ts){
    if(!root) return;

    if(root->val==ts){
        ans++;
    }
    //preorder use karna hai
    solve(root->left, ts-root->val);
    solve(root->right, ts-root->val);
}



    int pathSum(TreeNode* root, long long  targetSum) {
    if(root){
        solve(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
    }
    return ans;
    }
};