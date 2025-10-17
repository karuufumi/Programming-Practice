
"""
Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

 

Example 1:

Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.
Example 2:

Input: nums = [5,4,3,2,1]
Output: false
Explanation: No triplet exists.
Example 3:

Input: nums = [2,1,5,0,4,6]
Output: true
Explanation: One of the valid triplet is (1, 4, 5), because nums[1] == 1 < nums[4] == 4 < nums[5] == 6.

1 <= nums.length <= 5 * 10^5
-2^31 <= nums[i] <= 2^31 - 1

"""

from typing import List
import math
def increasingTriplet(self, nums: List[int]) -> bool:
    # track the 2 minimum, if there's a smaller than the 2nd minimum, then we have a triplet
        
    mi = float('inf')
    mid = float('inf')
    for num in nums:
        if num <= mi :
            mi = num
        elif num <= mid:
            mid = num
        else:
            return True
    return False
    
