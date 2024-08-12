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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        //base case
        bool ltr = true;
        vector<vector<int>>res;
        queue<TreeNode*> q;
        q.push(root);
        if(root==NULL){
            return res;
        }
        while(!q.empty()){
            int s = q.size();
            vector<int>ans(s);
            for(int i=0;i<s;i++){
                TreeNode *temp = q.front();
                q.pop();
                int index = (ltr)?i:(s-i-1);
                ans[index] = temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }}
            //direction change
            ltr=!ltr;
            res.push_back(ans);
            
        }

      return res;  
    }
};