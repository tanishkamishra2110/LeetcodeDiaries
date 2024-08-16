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
bool f=0;
bool solve(TreeNode* root, int t,int s){
    if(root==NULL){
        return 0;
    }
    s = s+root->val;
    // if(root)
     if(root->left==NULL && root->right==NULL){
            if(s==t){
              f=1;
            }
            else{
                f=0;
            }}
            bool a = solve(root->left,t,s);
            bool b = solve(root->right,t,s);
            if(a||b){
                f=1;
            }
        //   ?
            return f;
           
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        return solve(root, targetSum, sum);
       
    }
};