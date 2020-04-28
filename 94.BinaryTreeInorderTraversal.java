/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    
    
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> ret = new ArrayList<Integer>();
        traverse(ret, root);
        return ret;
    }
    
    void traverse(List<Integer> lt, TreeNode root) {
        if(root == null) return;
        
        traverse(lt, root.left);
        lt.add(root.val);
        traverse(lt, root.right);
    }
    
}