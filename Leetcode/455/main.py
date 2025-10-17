class Solution:

    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()

        child_i = 0
        cookie_j = 0

        # Try matching cookies to children
        while child_i < len(g) and cookie_j < len(s):
            # If cookie is big enough, this child is content!
            if s[cookie_j] >= g[child_i]:
                child_i += 1  # Move to the next child

            # Always move to the next cookie
            cookie_j += 1

        # The index child_i tells us how many children were satisfied
        return child_i
