from collections import deque
N, K = map(int, input().split())
queues = [deque() for _ in range(K)]
for _ in range(N):
    line = int(input()) - 1
    queues[line].append(1)
while all(queues[i] for i in range(K)):
    for i in range(K):
        queues[i].popleft()
print(sum(len(q) for q in queues))
