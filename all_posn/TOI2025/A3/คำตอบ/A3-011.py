N = int(input())
P = list(map(int, input().split()))
sums = set()
for i in range(N):
    total = 0
    for j in range(i, N):
        total += P[j]
        sums.add(total)
print(len(sums))
