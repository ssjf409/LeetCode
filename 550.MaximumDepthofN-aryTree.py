"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""
import queue

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if root == None:
            return 0
        data_queue = queue.Queue()
        data_queue.put(root)
        
        depth = 0
        
        while not data_queue.empty():
            depth = depth + 1
            queue_size = data_queue.qsize()
            for i in range(queue_size):
                node = data_queue.get()
                for child in node.children:
                    data_queue.put(child)
        
        return depth