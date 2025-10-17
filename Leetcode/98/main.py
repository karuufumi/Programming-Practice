# Definition for a binary tree node.
from typing import Optional
class TreeNode:
     def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True
        def inorder(root, tmp1,tmp2):
            if root is None:
                return True
            if root.left.val > root.val or root.right.val < root.val:
                return False
            for i in tmp1:
                if root.left.val > i
                    return False
            for i in tmp2:
                if root.right.val < i:
                    return False
            return True and inorder(root.left, tmp1, tmp2.append(root)) and inorder(root.right,tmp1.append(root),tmp2)

        return inorder(root,[],[])
