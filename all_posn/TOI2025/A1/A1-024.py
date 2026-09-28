a = int(input())
b = int(input())
if a <= 1990 :
  if b <= 1500:
    print("1250")
  elif 1500 < a <= 2000:
    print("1400")
  else:
    print("2000")
elif 1990 < a < 2000:
  if b <= 1500:
    print("1100")
  elif 1500 < b <= 2000:
    print("1300")
  else:
    print("1700")
else:
  if b <= 1500:
    print("1000")
  elif 1500 < b <= 2000:
    print("1200")
  else:
    print("1500")