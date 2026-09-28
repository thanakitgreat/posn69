a = int(input())
c = 10 * (a // 10) + 10
while c != 0:
  c -= 10
  print(c, end=" ")