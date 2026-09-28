N, L = map(int, input().split())
routes = [tuple(map(int, input().split())) for _ in range(N)]
routes.sort(key=lambda x: x[1])
last = -1
count = 0
for s, t in routes:
    if s > last:
        last = t
        count += 1
print(count)
