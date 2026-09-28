def count_valid_starts(grid, n):
    reachable = [[False] * n for _ in range(n)]

    if grid[n - 1][n - 1] == '.':
        reachable[n - 1][n - 1] = True

    for i in range(n - 1, -1, -1):
        for j in range(n - 1, -1, -1):
            if grid[i][j] == 'X':
                continue
            if i + 1 < n and reachable[i + 1][j]:
                reachable[i][j] = True
            if j + 1 < n and reachable[i][j + 1]:
                reachable[i][j] = True
    count = 0
    for i in range(n):
        for j in range(n):
            if grid[i][j] == '.' and reachable[i][j]:
                count += 1

    return count

n = int(input())
grid = [input().strip() for _ in range(n)]

print(count_valid_starts(grid, n))
