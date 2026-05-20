import sys
input = sys.stdin.readline
from collections import deque
import heapq

x = int(input())
q = int(input())

ans = 0 
left = []
right = []
mid = x

for _ in range(q):
    a, b = map(int, input().split())

    for i in (a, b):
        if mid > i:
            heapq.heappush(left, -i)
        else:
            heapq.heappush(right, i)
    
    if len(left) > len(right):
        heapq.heappush(right, mid)
        mid = -heapq.heappop(left)
    elif len(left) < len(right):
        heapq.heappush(left, -mid)
        mid = heapq.heappop(right)
    
    print(mid)
    # print(left, right)


"""
left = maxHeap
right = minHeap


"""