amount = int(input())
coins = [10,5,2,1]
for coin in coins:
  count = amount // coin
  print(f"{coin} = {count}")
  amount %= coin