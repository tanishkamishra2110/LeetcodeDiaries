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
    TreeNode* buildTreeinorderpreorder(vector<int>& postorder, vector<int>& inorder, int s, int &postindex, int inorderstart, int inorderend, map<int,int>&mp){
        //base case
        if(postindex<0||inorderstart>inorderend){
            return NULL;
        }
        int ele = postorder[postindex];
        postindex--;
        TreeNode* root = new TreeNode(ele);
        int pos = mp[ele];
        
        root->right = buildTreeinorderpreorder(postorder,inorder,s,postindex, pos+1, inorderend,mp );
        root->left = buildTreeinorderpreorder(postorder,inorder,s,postindex, inorderstart, pos-1, mp );
        return root;
        
    }


    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
       
        int inorderstart=0;
        int size = postorder.size();
           int postindex =size-1;
        int inorderend = size-1;
        map<int,int>mp;
        mapping(inorder,mp,size);
        return buildTreeinorderpreorder(postorder, inorder, size, postindex, inorderstart, inorderend, mp);
    }
};