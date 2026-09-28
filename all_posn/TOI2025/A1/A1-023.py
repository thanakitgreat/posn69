a = int(input())
b = input()
if b == "C":
  if a <= 0:
    print("solid")
  elif 0 < a < 100:
    print("liquid")
  else:
    print("gas")
else:
  if a <= 32:
    print("solid")
  elif 32 < a < 212:
    print("liquid")
  else:
    print("gas")