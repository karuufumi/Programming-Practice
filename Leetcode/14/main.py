from typing import *

def longestCommonPrefix(self, strs: List[str]) -> str:
    sortedArr = sorted(strs)
    res =""
    firstEle = sortedArr[0]
    lastEle = sortedArr[-1]
    for i in range(len(min(firstEle, lastEle))):
        if firstEle[i] == lastEle[i]:
            res += firstEle[i]
        else:
            break
    return res

if __name__ == "__main__":
    strs = ["flower","flow","flight"]
    print(longestCommonPrefix(None, strs))
    pass
