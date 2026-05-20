import sys
input = lambda: sys.stdin.readline().rstrip("\n")

S = input()
cnt = 0

for i in range(len(S)):
    if S[i] == 'C':
        cnt += min(i, len(S) - 1 - i) + 1
    
print(cnt)