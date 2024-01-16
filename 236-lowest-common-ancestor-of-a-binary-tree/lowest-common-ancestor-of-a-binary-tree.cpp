/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(root==p){
            return p;
        }
        if(root==q){
            return q;
        }
        TreeNode* la = lowestCommonAncestor(root->left,p,q);
           TreeNode* ra = lowestCommonAncestor(root->right,p,q);
           if(la==NULL&&ra==NULL){
               return NULL;
           }
           else if(la==NULL&&ra!=NULL){
               return ra;
           }
           else if(ra==NULL&&la!=NULL){
               return la;
           }
           else{
               return root;
           }
    }
};