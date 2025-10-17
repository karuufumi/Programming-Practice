from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        hashTable = {}
        for i in nums:
            if hashTable[i] !=0:
                return True
            else:
                hashTable[i] =1

        return False
