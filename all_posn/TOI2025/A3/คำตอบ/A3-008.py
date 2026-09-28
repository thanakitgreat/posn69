from collections import defaultdict
N, K = map(int, input().split())
colors = [int(input()) for _ in range(N)]
left = 0
count = 0
freq = defaultdict(int)
distinct = 0
for right in range(N):
    if freq[colors[right]] == 0:
        distinct += 1
    freq[colors[right]] += 1
    while distinct >= K:
        count += N - right
        freq[colors[left]] -= 1
        if freq[colors[left]] == 0:
            distinct -= 1
        left += 1
print(count)
