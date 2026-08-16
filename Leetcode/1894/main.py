class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        prefix = list(accumulate(chalk))
        return bisect_right(prefix, k % prefix[-1])
