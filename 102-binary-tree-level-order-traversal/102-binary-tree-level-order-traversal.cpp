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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        
        if(root == NULL) {
            return ans;
        }
        q.push(root);
        ans.push_back({root -> val});
        while (!q.empty()) {
            int currSize = q.size();
            vector<int> temp;
            for (int i = 0; i < currSize; i++) {
                TreeNode* top = q.front();
                q.pop();
                if (top -> left != NULL) {
                    q.push(top -> left);
                    temp.push_back(top -> left -> val);
                }
                if (top -> right != NULL) {
                    q.push(top -> right);
                    temp.push_back(top -> right -> val);
                }
            }
            ans.push_back(temp);
        }
        ans.pop_back();
        return ans;
    }
};