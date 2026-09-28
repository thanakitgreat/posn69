a, b = input().split()
c, d = input().split()
if b == d :
  if a == c :
    print("1000000")
  elif a != c :
    print("100000")
elif int(b) % 1000 == int(d) % 1000 :
  if a == c :
    print("2000")
  elif a != c :
    print("200")
elif int(b) % 100 == int(d) % 100 :
  if a == c :
    print("1000")
  elif a != c :
    print("100")
elif int(b) != int(d) :
  if a == c :
    print("20")
  elif a != c :
    print("0")