import sys
input = sys.stdin.readline
from collections import deque

s = input().rstrip()
n = int(input())
print(s[n:-n])