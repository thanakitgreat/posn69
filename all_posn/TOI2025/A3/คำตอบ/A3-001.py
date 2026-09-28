import sys
sys.setrecursionlimit(10000)

n = int(input())
data = [None]
for _ in range(n):
    a, l, b, r = map(int, input().split())
    data.append(((a, l), (b, r)))

def dfs(i):
    (al, l), (br, r) = data[i]
    lw, lc = dfs(l) if al == 0 else (l, 0)
    rw, rc = dfs(r) if br == 0 else (r, 0)
    maxw = max(lw, rw)
    lw_add = maxw - lw
    rw_add = maxw - rw
    return 2 * maxw, lc + rc + lw_add + rw_add

_, ans = dfs(1)
print(int(ans))
