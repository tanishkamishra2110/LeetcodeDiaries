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
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int l = maxDepth(root->left);
        cout<<"L is "<<l<<endl;
          int r = maxDepth(root->right);
           cout<<"R is "<<r<<endl;
          int x = max(l,r)+1;
          cout<<" Max is "<<x<<endl;
          return x;
    }
};