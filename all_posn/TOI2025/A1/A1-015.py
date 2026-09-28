a = input()
b = input()
c = input()
if len(a) >= 5:
  print(a[:2]+b[-1]+c[-1])
else:
  print(a[:1]+c+b[-1])
