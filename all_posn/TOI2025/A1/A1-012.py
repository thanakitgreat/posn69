a = int(input())
b = input()
c = a // 10 + 10 *(a % 10)
d = ["+"]
e = ["*"]
if b in d:
  print(a ,"+", c ,"=", a+c)
elif b in e:
  print(a ,"*", c ,"=", a*c)