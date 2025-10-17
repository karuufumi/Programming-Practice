"""
Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid.

"""

from typing import *
from collections import deque

def isValid(s: str) -> bool:
    stack = []
    mapping = {
        ')' : '(',
        ']' : '[',
        '}' : '{'
    }
    for i in s:
        if len(stack) ==0:
            if mapping[i] is not None:
                return False
            stack[0] = i
        curr = stack[-1]
        if i in ['(','[','{']:
            stack.append(i)
        elif mapping[i] != curr:
           return False
        else:
            stack.pop()
    if len(stack) !=0:
        return False
    return True


if __name__ == "__main__":
    s = "()"
    print(isValid(s))
    pass
