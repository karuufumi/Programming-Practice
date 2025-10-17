from typing import List
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxProf = 0
        minPrice = prices[0]
        for i in range(1, len(prices)):
            if prices[i] < minPrice:
                minPrice = prices[i]
            elif prices[i] -  minPrice > maxProf:
                maxProf = prices[i] - minPrice
        return maxProf
