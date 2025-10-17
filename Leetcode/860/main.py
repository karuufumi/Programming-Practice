from typing import List
class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        fives,tens = 0,0
        for i in bills:
            if i == 5:
                fives +=1
                continue
            elif i == 10:
                if fives > 0:
                    tens +=1
                    fives -=1
                else: return False
            elif i == 20:
                if (fives >= 1 and tens >=1):
                    fives -= 1
                    tens -= 1
                elif (fives >=3):
                   fives -= 3
                else: return False
        return True
