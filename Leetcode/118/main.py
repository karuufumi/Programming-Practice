class Solution:
    def generate(self,num_rows: int) -> list[list[int]]:
        if num_rows <= 0:
            return []
        dp = [[1]]
        for r in range(1, num_rows):
            prev_row = dp[r - 1]
            current_row = [1]

            for c in range(1, r):
                current_row.append(prev_row[c - 1] + prev_row[c])
            current_row.append(1)
            dp.append(current_row)

        return dp
