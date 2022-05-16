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
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        int ans = 0;
        while(!q.empty()) {
            int currSize = q.size();
            int sum = 0;
            for (int i = 0; i < currSize; i++) {
                TreeNode* temp = q.front();
                sum += temp -> val;
                q.pop();
                if (temp -> left != NULL)
                    q.push(temp -> left);
                if (temp -> right != NULL)
                    q.push(temp -> right);
            }
            ans = sum;
        }
        return ans;
    }
};