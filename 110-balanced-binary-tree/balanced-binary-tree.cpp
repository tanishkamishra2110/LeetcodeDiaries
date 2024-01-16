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

int height(TreeNode* root){
     if(root==NULL){
            return 0;
        }
        int l = height(root->left);
      
          int r = height(root->right);
          
          int x = max(l,r)+1;
      
          return x;
}
 
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int lh = height(root->left);
        int rh = height(root->right);
        int d = abs(lh-rh);
        bool e=(d<=1);
       
        bool la=isBalanced(root->left);
        bool ra = isBalanced(root->right);
        return(la&&ra&&e);
    }
};