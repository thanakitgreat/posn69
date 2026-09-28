a = input()
b = int(input())
if a == "H" and b == 4567 :
  print("safe unlocked")
elif a == "H" and b != 4567 :
  print("safe locked - change digit")
elif a != "H" and b == 4567 :
  print("safe locked - change char")
elif a != "H" and b != 4567 :
  print("safe locked")