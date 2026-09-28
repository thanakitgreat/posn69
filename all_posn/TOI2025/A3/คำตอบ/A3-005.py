import sys

n, m = map(int, sys.stdin.readline().split())
events = []
for _ in range(m):
    s, t = map(int, sys.stdin.readline().split())
    events.append((s, 1))
    events.append((t + 1, -1))
events.sort()
active = 0
max_active = 0
for _, delta in events:
    active += delta
    if active > max_active:
        max_active = active
print(max_active)
