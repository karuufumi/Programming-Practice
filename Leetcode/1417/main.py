class Solution:
    def reformat(self, s: str) -> str:
        digits = [d for d in s if d.isdigit()]
        alphas = [d for d in s if d.isalpha()]
        if abs(len(digits) - len(alphas)) > 1:
            return ""
        res = ""
        while digits and alphas:
            result =  result + digits.pop() + alphas.pop()
        if digits:
            result = result + digits.pop()
        elif alphas:
            result = result + alphas.pop()
        return result
