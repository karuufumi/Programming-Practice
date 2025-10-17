from typing import List
class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        res=[]
        def dfs(i,tmp):
            if i> len(candidates) or sum(tmp) > target:
                return
            elif sum(tmp) == target:
                res.append(tmp[::])
                return
            tmp.append(candidates[i])
            dfs(i,tmp)
            tmp.pop()
            dfs(i+1,tmp)
        dfs(0,[])
        return res
