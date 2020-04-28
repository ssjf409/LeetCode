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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ret;
        
        if(root == NULL) return ret;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()) {
            int qsize = q.size();
            TreeNode* curNode;
            
            vector<int> temp;
            for(int i = 0; i < qsize; i++) {
                curNode = q.front();
                q.pop();
                temp.push_back(curNode->val);
                if(curNode->left != NULL) q.push(curNode->left);
                if(curNode->right != NULL) q.push(curNode->right);
            }
            ret.push_back(temp);
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};