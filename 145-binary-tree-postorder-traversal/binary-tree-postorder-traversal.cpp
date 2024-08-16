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
 void postOrder(TreeNode* root,vector<int>& ans){
    //lnr
    //base case
        if(root==NULL) return;
        //left ki call
        postOrder(root->left,ans);
        
        //right ki call
        postOrder(root->right,ans);
        //node push
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int>ans;
        postOrder(root,ans);
        return ans;
    }
};