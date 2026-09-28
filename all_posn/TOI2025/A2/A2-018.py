start_color, n = input().split()
n = int(n)

colors = ['Red', 'Green', 'Blue']

start_index = {'R': 0, 'G': 1, 'B': 2}[start_color]

result = []
for i in range(n):
    color = colors[(start_index + i) % 3]
    result.append(color)

print(' '.join(result))
