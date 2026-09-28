a = int(input())
b = int(input())
c = int(input())
co = 0
ce = 0
if a % 2 == 0:
  ce += 1
else :
  co += 1
if b % 2 == 0:
  ce += 1
else :
  co += 1
if c % 2 == 0:
  ce += 1
else :
  co += 1
print("even ",ce)
print("odd ",co)