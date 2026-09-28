N = int(input())
heights = [int(input()) for _ in range(N)]
heights.sort()
total = 0
base = 0
for h in heights:
    base += h
    total += base * 2
print(total)
