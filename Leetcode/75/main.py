from typing import List
from collections import defaultdict

def sortColors( nums: List[int]) -> None:
    """
    Do not return anything, modify nums in-place instead.
    """
    map = defaultdict(int)
    map[0] = 0
    map[1] = 0
    map[2] = 0
    for i in nums:
        map[i] +=1
    i = 0
    while (map[0]!=0):
        map[0] -=1
        nums[i] = 0
        i+=1
    while(map[1] !=0):
        map[1] -=1
        nums[i] =1
        i+=1
    while(map[2] !=0):
        map[2] -=1
        nums[i] = 2
        i+=1

def main():
    nums = [2,0,2,1,1,0]
    print(sortColors(nums))

main()
