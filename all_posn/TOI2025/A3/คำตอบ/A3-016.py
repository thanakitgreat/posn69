from collections import defaultdict, deque
N, M = map(int, input().split())
dependents = defaultdict(list)
remaining = [0] * (N + 1)
rules = []
for _ in range(M):
    parts = list(map(int, input().split()))
    k = parts[0]
    srcs = parts[1:k+1]
    tgt = parts[-1]
    rules.append((srcs, tgt))
    for s in srcs:
        dependents[s].append(len(rules) - 1)
    remaining[tgt] += 1
on = [False] * (N + 1)
on[1] = True
q = deque([1])
triggered = [0] * len(rules)
while q:
    bulb = q.popleft()
    for r in dependents[bulb]:
        if triggered[r] == -1:
            continue
        triggered[r] += 1
        if triggered[r] == len(rules[r][0]):
            t = rules[r][1]
            if not on[t]:
                on[t] = True
                q.append(t)
            triggered[r] = -1
print(sum(on))
