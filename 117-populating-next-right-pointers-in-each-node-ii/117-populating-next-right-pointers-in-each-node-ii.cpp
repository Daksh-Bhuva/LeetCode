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
        queue<Node*> q;
        if (root == NULL) 
            return root;
        q.push(root);
        while(!q.empty()) {
            int curr_size = q.size();
            for (int i = 0; i < curr_size - 1; i++) {
                Node* temp = q.front();
                q.pop();
                if (temp -> left != NULL) {
                    q.push(temp -> left);
                }
                if (temp -> right != NULL) {
                    q.push(temp -> right);
                }
                temp -> next = q.front();
            }
            q.front() -> next = NULL;
            if (q.front() -> left != NULL) {
                q.push(q.front() -> left);
            }
            if (q.front() -> right != NULL) {
                q.push(q.front() -> right);
            }
            q.pop();
            
        }
        return root;
    }
};