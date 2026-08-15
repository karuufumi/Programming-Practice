from typing import *

class Solution:
    def solve(self, index1, index2, word1, word2):
        if index1 < 0:
            return index2 + 1
        if index2 < 0:
            return index1 + 1
        if word1[index1] == word2[index2]:
            return self.solve(index1 - 1, index2 - 1, word1, word2)
        insertion = 1 + self.solve(index1, index2 - 1, word1, word2)
        deletion = 1 + self.solve(index1 - 1, index2, word1, word2)
        replacement = 1 + self.solve(index1 - 1, index2 - 1, word1, word2)
        return min(insertion, deletion, replacement)

    def minDistance(self, word1: str, word2: str) -> int:
        n1 = len(word1)
        n2 = len(word2)
        return self.solve(n1 - 1, n2 - 1, word1, word2)

if __name__ == __main__:
    pass
