from inspect import isasyncgen
from typing import Optional
# Definition for a binary tree node.
class TreeNode:
     def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        def dfs(left: Optional[TreeNode], right: Optional[TreeNode]):
            if left is None and right is None:
                return True
            if left is None or right is None:
                return False
            if left.val != right.val:
                return False
            leftPair = dfs(left.right, right.left)
            rightPair = dfs(left.left,right.right)
            return leftPair and rightPair

        if root is None:
            return True
        return dfs(root.left,root.right)
