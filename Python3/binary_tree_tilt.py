# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTilt(self, root: TreeNode) -> int:
        self.sums = 0
        
        def gettilt(root):
            if not root: return 0
            else:
                l = r = 0
                if root.left:
                    l = gettilt(root.left)
                if root.right:
                    r = gettilt(root.right) 
                self.sums += abs(r - l)
                return l + r + root.val
        gettilt(root)
        
        return self.sums
