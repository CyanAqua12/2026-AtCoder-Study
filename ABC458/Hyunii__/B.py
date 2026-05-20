import sys
input = sys.stdin.readline
from collections import deque
dxdy = [(-1, 0), (1, 0), (0, -1), (0, 1)]

h, w = map(int, input().split())
for i in range(h):
    row = []
    for j in range(w):
        cnt = 0

        for x, y in dxdy:
            nx, ny = i+x, j+y
            if 0 <= nx < h and 0 <= ny < w:
                cnt += 1
        row.append(cnt)
    
    print(*row)
            
