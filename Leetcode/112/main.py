'''
Path sum
Given the root of a binary tree and an integer targetSum,
return true if the tree has a root-to-leaf path such that adding up
all the values along the path equals targetSum.
'''
from typing import *


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def pathSum(root: TreeNode, targetSum: int) -> bool:
   # return root.val + pathSum(root.left) + pathSum(root.right)
    if not root:
       return False
    #return root.val + max(pathSum(root.left), pathSum(root.right))
    if root.left is None and root.right is None:
        isTrue = (targetSum - root.val) == 0
        return isTrue

    return pathSum(root.left, targetSum - root.val) or pathSum(root.right, targetSum - root.val)


def hasPathSum(root: TreeNode, targetSum: int) -> bool:
    return pathSum(root, targetSum)

if __name__ == "__main__":
    root = TreeNode(5)
    root.left = TreeNode(4)
    root.right = TreeNode(8)
    root.left.left = TreeNode(11)
    root.right.left = TreeNode(13)
    root.right.right = TreeNode(4)
    root.left.left.left = TreeNode(7)
    root.left.left.right = TreeNode(2)
    root.right.right.right = TreeNode(1)
    targetSum = 22
    print(hasPathSum(root, targetSum))
