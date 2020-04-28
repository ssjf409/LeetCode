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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ret;
        traverse(ret, root);
        return ret;
    }
    
    void traverse(vector<int>& ret, TreeNode* node) {
        if(node == NULL) return;
        
        traverse(ret, node->left);
        ret.push_back(node->val);
        traverse(ret, node->right);
    }
};