N, S = map(int, input().split())
forward = [int(input()) for _ in range(N)]
seen = set()
current = S
while current and current not in seen:
    seen.add(current)
    current = forward[current - 1]
print(len(seen))
