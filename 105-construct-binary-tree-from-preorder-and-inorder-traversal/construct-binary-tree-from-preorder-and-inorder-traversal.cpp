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
   void mapping(vector<int>& inorder, map<int, int> &mp, int n ) {
        for(int i = 0;i<n;i++) {
            mp[inorder[i]] = i;
        }
    }
    TreeNode* buildTreeinorderpreorder(vector<int>& preorder, vector<int>& inorder, int s, int &preindex, int inorderstart, int inorderend, map<int,int>&mp){
        //base case
        if(preindex>=s||inorderstart>inorderend){
            return NULL;
        }
        int ele = preorder[preindex];
        preindex++;
        TreeNode* root = new TreeNode(ele);
        int pos = mp[ele];
        root->left = buildTreeinorderpreorder(preorder,inorder,s,preindex, inorderstart, pos-1, mp );
        root->right = buildTreeinorderpreorder(preorder,inorder,s,preindex, pos+1, inorderend,mp );
        return root;
        
    }



    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preindex =0;
        int inorderstart=0;
        int size = preorder.size();
        int inorderend = size-1;
        map<int,int>mp;
        mapping(inorder,mp,size);
        return buildTreeinorderpreorder(preorder, inorder, size, preindex, inorderstart, inorderend, mp);
        
    }
};