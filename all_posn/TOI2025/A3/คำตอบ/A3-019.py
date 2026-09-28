N, L = map(int, input().split())
H = list(map(int, input().split()))
A = list(map(int, input().split()))
for idx in A:
    m = max(H[:idx - 1], default=0)
    print(max(0, m - H[idx - 1] + 1))
