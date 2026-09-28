L, N = map(int, input().split())
bridges = [tuple(map(int, input().split())) for _ in range(N)]
max_count = 0
for x in range(2 * L + 1):
    point = x / 2
    count = sum(a < point < b for a, b in bridges)
    max_count = max(max_count, count)
print(max_count)
