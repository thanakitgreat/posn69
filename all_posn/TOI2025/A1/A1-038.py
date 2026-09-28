a = int(input())
for i in range (1,a+1):
  if i % 5 != 0:
    print("*", end="")
  else:
    print("X", end="")