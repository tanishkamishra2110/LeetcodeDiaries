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
 int height(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int l = height(root->left);
          int r = height(root->right);
        

          return max(l,r)+1;}
    int diameterOfBinaryTree(TreeNode* root) {
       if(root == NULL){
           return 0;
       }

       int left= diameterOfBinaryTree(root->left);
       int right= diameterOfBinaryTree(root->right);
       int ans= height(root->left)+height(root->right);

       return max(left, max(right,ans));
    }
};