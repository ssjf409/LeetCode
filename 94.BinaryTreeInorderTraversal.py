# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        lt = []
        traverse(lt, root)
        return lt
        
    def traverse(lt, node):
        if node.val == None:
            return
        traverse(lt, node.left)
        lt.append(node.val)
        traverse(lt, node.right)