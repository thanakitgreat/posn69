a = input()
b = 0
c = ["a","e","i","o","u"]
for i in range (3) :
  if a[i] in c :
    b += 1
  else :
    b += 0
print(b)