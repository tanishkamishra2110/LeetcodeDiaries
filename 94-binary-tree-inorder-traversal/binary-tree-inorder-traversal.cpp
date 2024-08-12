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
   void inOrder(TreeNode* root,vector<int>& ans){
    //lnr
    //base case
        if(root==NULL) return;
        //left ki call
        inOrder(root->left,ans);
        //node push
        ans.push_back(root->val);
        //right ki call
        inOrder(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int>ans;
        inOrder(root,ans);
        return ans;
    }
};