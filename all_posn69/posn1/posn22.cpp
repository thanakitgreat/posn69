#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

struct State {
    int r, c, mask, dist;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;

    for (int tc = 1; tc <= T; tc++) {
        int N, M;
        cin >> N >> M;

        vector<S> grid(N);
        int sr = -1, sc = -1;

        for (int i = 0; i < N; i++) {
            cin >> grid[i];
            for (int j = 0; j < M; j++) {
                if (grid[i][j] == 'S') {
                    sr = i;
                    sc = j;
                }
            }
        }

        vector<vector<vector<int>>> dist(N, vector<vector<int>>(M, vector<int>(64, -1)));
        queue<State> q;

        q.push({sr, sc, 0, 0});
        dist[sr][sc][0] = 0;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        int ans = -1;

        while (!q.empty()) {
            State curr = q.front();
            q.pop();

            if (grid[curr.r][curr.c] == 'E') {
                ans = curr.dist;
                break;
            }

            for (int i = 0; i < 4; i++) {
                int nr = curr.r + dr[i];
                int nc = curr.c + dc[i];

                if (nr >= 0 && nr < N && nc >= 0 && nc < M) {
                    C ch = grid[nr][nc];
                    if (ch == '#') continue;

                    int nmask = curr.mask;
                    if (ch >= 'a' && ch <= 'f') {
                        nmask |= (1 << (ch - 'a'));
                    } else if (ch >= 'A' && ch <= 'F') {
                        if (!(nmask & (1 << (ch - 'A')))) continue;
                    }

                    if (dist[nr][nc][nmask] == -1) {
                        dist[nr][nc][nmask] = curr.dist + 1;
                        q.push({nr, nc, nmask, curr.dist + 1});
                    }
                }
            }
        }

        cout << "Simulation #" << tc << ": Mastermind Activated.\n";
        if (ans != -1) {
            cout << "Minimum Steps to Target: " << ans << "\n";
        } else {
            cout << "Target Unreachable. The Labyrinth is sealed.\n";
        }
    }

    return 0;
}