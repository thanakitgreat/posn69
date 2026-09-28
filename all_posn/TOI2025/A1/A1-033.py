a = int(input())
b = {'A', 'E', 'I', 'O', 'U'}
c = sum(1 for _ in range(a) if input().upper() in b)
print(c)
