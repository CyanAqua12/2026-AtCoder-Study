import sys
input = sys.stdin.readline
from collections import deque

s = input().rstrip()

cnt = 0
for i in range(len(s)):
    if s[i] == 'C':
        left = i
        right = len(s)-1-i
        cnt += min(left, right) + 1

print(cnt)


"""
ABCCA

2
BCC ABCCA C(+1)
3
CCA C(+1)


"""