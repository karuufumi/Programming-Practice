# 1. Find the second largest element in one pass without extra space.

from typing import List
def secLargest(lst: List[int]) -> int:
    largest = lst[0]
    secLargest = lst[0] if lst[0] < lst[1] else lst[1]
    for i in range(len(lst)):
        if lst[i] > largest:
            secLargest = largest
            largest = lst[i]
        elif lst[i] > secLargest:
            secLargest = lst[i]
    return secLargest
