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
    void invert(TreeNode* root) {
        //check karo root null hai toh return
        if(root==NULL){
            return;
        }
        //swap kardo left child and right child ko
        swap(root->left,root->right);
        //then call the function seperately into left side pehle and then right side
        invert(root->left);
        invert(root->right);
    }
     TreeNode* invertTree(TreeNode* root) {
         invert(root);
         return root;
    }
};