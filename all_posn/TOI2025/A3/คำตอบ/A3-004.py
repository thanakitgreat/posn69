import sys

n = int(sys.stdin.readline())
u, v = [], []

for _ in range(n):
    x, y = map(int, sys.stdin.readline().split())
    u.append(x + y)
    v.append(x - y)

u.sort()
v.sort()
median_u = u[n // 2]
median_v = v[n // 2]
total = sum(abs(median_u - x) for x in u) + sum(abs(median_v - x) for x in v)

print(total)
