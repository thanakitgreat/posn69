def find_top_two_areas(W, H, vertical_blades, horizontal_blades):
    x_positions = [0] + vertical_blades + [W]
    y_positions = [0] + horizontal_blades + [H]

    widths = [x_positions[i+1] - x_positions[i] for i in range(len(x_positions)-1)]
    heights = [y_positions[i+1] - y_positions[i] for i in range(len(y_positions)-1)]

    areas = []
    for w in widths:
        for h in heights:
            areas.append(w * h)

    areas.sort(reverse=True)
    return areas[0], areas[1]


def main():
    W, H, M, N = map(int, input().split())
    vertical_blades = list(map(int, input().split()))
    horizontal_blades = list(map(int, input().split()))

    top1, top2 = find_top_two_areas(W, H, vertical_blades, horizontal_blades)
    print(top1, top2)

if __name__ == "__main__":
    main()
