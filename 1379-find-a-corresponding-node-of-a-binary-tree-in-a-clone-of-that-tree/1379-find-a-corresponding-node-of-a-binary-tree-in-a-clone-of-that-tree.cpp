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
    
    void dfs (TreeNode* tree, TreeNode* target, vector<int> &path, bool &present) {
        if (tree == target) 
            present = true;

        if (!present and tree -> left != NULL) {
            path.push_back(-1);
            dfs(tree -> left, target, path, present);
            if (!present) 
                path.pop_back();
        }
        if (!present and tree -> right != NULL) {
            path.push_back(1);
            dfs(tree -> right, target, path, present);
            if (!present) 
                path.pop_back();
        }
    } 
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        vector<int> path;
        bool present = false;
        
        dfs(original, target, path, present);
        
        for (int i : path) {
            if (i == -1) {
                cloned = cloned -> left;
            }
            else {
                cloned = cloned -> right;
            }
        }
        return cloned;
//         queue<TreeNode*> q;
//         q.push(cloned);
        
//         while(!q.empty()) {
//             int currSize = q.size();
//             for (int i = 0; i < currSize; i++) {
//                 TreeNode* top = q.front();
//                 q.pop();
//                 if (top -> val == target -> val)
//                     return top;
//                 if (top -> left != NULL)
//                     q.push(top -> left);
//                 if (top -> right != NULL)
//                     q.push(top -> right);
//             }
//         }
//         return cloned;
    }
};