def tournament_winner(N, C, match_results):
    teams = list(range(1, N + 1))
    special_used = False
    
    while len(teams) > 1:
        next_round = []
        for i in range(0, len(teams), 2):
            team1, team2 = teams[i], teams[i + 1]
            if match_results[team1 - 1][team2 - 1] == team1:
                winner = team1
            else:
                winner = team2
            
            if C == team1 and winner == team2 and not special_used:
                winner = team1
                special_used = True
            elif C == team2 and winner == team1 and not special_used:
                winner = team2
                special_used = True
            
            next_round.append(winner)
        teams = next_round
    
    return teams[0]

N, C = map(int, input().split())
match_results = [list(map(int, input().split())) for _ in range(N)]

print(tournament_winner(N, C, match_results))
