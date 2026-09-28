a = float(input())
b = float(input())
c = float(input())
d = a >= (10*0.5)
e = b >= (40*0.5)
f = c >= (50*0.5)
if d and e and f:
  print("pass")
else:
  print("fail")