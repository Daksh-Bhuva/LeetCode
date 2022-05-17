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
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> q;
        q.push(cloned);
        
        while(!q.empty()) {
            int currSize = q.size();
            for (int i = 0; i < currSize; i++) {
                TreeNode* top = q.front();
                q.pop();
                if (top -> val == target -> val)
                    return top;
                if (top -> left != NULL)
                    q.push(top -> left);
                if (top -> right != NULL)
                    q.push(top -> right);
            }
        }
        return cloned;
    }
};