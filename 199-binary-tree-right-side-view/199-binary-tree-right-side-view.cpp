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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) {
            return {};
        }
        queue<TreeNode*> q;
        vector<int> ans;
        
        q.push(root);
        ans.push_back(root -> val);
        while (!q.empty()) {
            int currSize = q.size();
            for (int i = 0; i < currSize; i++) {
                TreeNode* top = q.front();
                q.pop();
                if (top -> left != NULL)
                    q.push(top -> left);
                if (top -> right != NULL)
                    q.push(top -> right);
            }
            TreeNode* last = q.back();
            ans.push_back(last -> val);
        }
        ans.pop_back();
        return ans;
    }
};