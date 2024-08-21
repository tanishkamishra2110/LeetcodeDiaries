/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
         if(root == NULL){
            return root;
        }

        queue<Node*> q;
        q.push(root);

        while(!q.empty()){
            int qsize = q.size();
            vector<Node*> result;

            for(int i=0; i<qsize; i++){
                Node* temp = q.front();
                result.push_back(temp);
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            
            for(int i=0; i<result.size()-1; i++){
                result[i]->next = result[i+1];
            }
        }
        return root;
    }
};