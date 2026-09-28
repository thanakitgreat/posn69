N, K, T = map(int, input().split())
visited = set()
current = 1
while current not in visited and current != T:
    visited.add(current)
    current = (current + K - 1) % N + 1
visited.add(current)
print(len(visited))
