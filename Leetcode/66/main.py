from typing import List
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        if digits[-1] != 9:
            digits[-1] +=1
            return digits
        i = len(digits)-1
        res =[]
        while( i >=0 and digits[i] ==9 ):
           res.append(0)
           i-=1
        if i <0:
            res.insert(0,1)
        else:
            digits[i]+=1
            while (i >=0):
                res.insert(0,digits[i])
                i-=1
        return res
