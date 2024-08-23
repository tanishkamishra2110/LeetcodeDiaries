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
   
   int size(TreeNode* root){
    if(!root){
        return 0;
    }
    // if(!root->right&&!root->left){
    //     return;
    // }
    int l = size(root->left);
    int r = size(root->right);

    return l+r+1;
   }
 
bool check(TreeNode* root, int n, int i){
    if(!root){
        return true;
    }
    if(i>n){
        return false;
    }
    return check(root->left,n,2*i) &&check(root->right,n,2*i+1);
}



    bool isCompleteTree(TreeNode* root) {
      int n = size(root);
      bool t = check(root,n,1);
      return t;

    }
};