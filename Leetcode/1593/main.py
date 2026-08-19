class Solution:
    def maxUniqueSplit(self, s: str) -> int:
        def dfs(start: int, seen: frozenset) -> int:
            return max(
                (1 + dfs(end, seen | {sub})
                 for end in range(start + 1, len(s) + 1)
                 if (sub := s[start:end]) not in seen),
                default=0,
            )

        return dfs(0, frozenset())
