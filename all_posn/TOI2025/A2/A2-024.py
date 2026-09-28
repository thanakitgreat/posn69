L, P = map(int, input().split())
rabbit_jump, monkey_jump, frog_jump = map(int, input().split())

points = {}
for _ in range(P):
    pos, score = map(int, input().split())
    points[pos] = score

def simulate_jump(jump_length):
    position = 0
    total_score = 0
    while position <= L:
        if position in points:
            total_score += points[position]
        position += jump_length
    return total_score

rabbit_score = simulate_jump(rabbit_jump)
monkey_score = simulate_jump(monkey_jump)
frog_score = simulate_jump(frog_jump)

max_score = max(rabbit_score, monkey_score, frog_score)

winners = []
if rabbit_score == max_score:
    winners.append(("Rabbit", rabbit_score))
if monkey_score == max_score:
    winners.append(("Monkey", monkey_score))
if frog_score == max_score:
    winners.append(("Frog", frog_score))

for winner in winners:
    print(winner[0], winner[1])
