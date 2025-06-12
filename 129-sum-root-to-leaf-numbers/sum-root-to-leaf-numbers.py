# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def get_r(self,root,temp,result):
        if root is None : 
           return 

        temp = temp*10 + root.val
    
        if root.left is None and root.right is None :
            result[0]+=temp
            return 
        self.get_r(root.left,temp,result)
        self.get_r(root.right,temp,result)      
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        result=[0]
       # temp=0
        self.get_r(root,0,result)
        return result[0]


        