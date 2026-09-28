def count_bird_friendly_trees(N, heights):
    count = 0
    for i in range(N):
        left_ok = (i == 0 or heights[i] > heights[i - 1])
        right_ok = (i == N - 1 or heights[i] > heights[i + 1])
        if left_ok and right_ok:
            count += 1
    return count

def main():
    N = int(input())
    heights = list(map(int, input().split()))
    print(count_bird_friendly_trees(N, heights))

if __name__ == "__main__":
    main()
