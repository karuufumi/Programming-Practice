from typing import List
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []
        sol = []
        def dfs():
            if len(sol) == len(nums):
                res.append(sol[:])
                return
            for i in nums:
                if i not in sol:
                    sol.append(i)
                    dfs()
                    sol.pop()
        dfs()
        return res
