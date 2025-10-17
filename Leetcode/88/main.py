from typing import List
class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
            """
            Do not return anything, modify nums1 in-place instead.
            """
            i, j = 0,0
            res=[]
            while (i < len(nums1) or j < len(nums2)):
                if (nums1[i] < nums2[j]):
                    res.append(nums1[i])
                    i+=1
                else:
                    res.append(nums2[j])
                    j+=1
            nums1 = res

if __name__ == "__main__":
    nums1 = [1,2,3,0,0,0]
    sol = Solution
    nums2 = [2,5,6]
    sol.merge(nums1,nums2)
