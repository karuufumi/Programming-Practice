from typing import *
def strStr(haystack: str, needle: str) -> int:
    for i in range(0, len(haystack)):
        if haystack[i] == needle[0]:
            j = 0
            k = i
            while (j < len(needle) and k < len(haystack)):
                if (haystack[k] == needle[j]):
                    j+=1
                    k+=1
                else:
                    break
            if (j == len(needle)):
                    return i
            else:
                i += j
    return -1
if __name__ == "__main__":
    haystack = "sadbutsad"
    needle = "sad"
    print(strStr(haystack,needle))
    pass
