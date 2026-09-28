a = int(input())
b = int(input())
d = [1,2,3]
e = [4,5,6]
f = [7,8,9]
g = [10,11,12]
if a in d:
  if a % 3 == 0 and b >= 21:
    print("spring")
  else:
    print("winter")
elif a in e:
  if a % 3 == 0 and b >= 21:
    print("summer")
  else:
    print("spring")
elif a in f:
  if a % 3 == 0 and b >= 21:
    print("fall")
  else:
    print("summer")
elif a in g:
  if a % 3 == 0 and b >= 21:
    print("winter")
  else:
    print("fall")