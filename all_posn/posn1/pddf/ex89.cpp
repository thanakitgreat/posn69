#include <bits/stdc++.h>
using namespace std;

typedef char C;
typedef bool B;
typedef long long L;
typedef double D;
typedef string S;
typedef stringstream SS;
const L INF = 1e18;

int main() {
    L n, R;
    cin >> n >> R;

    vector<L> px(n), py(n);
    for (L i = 0; i < n; i++)
        cin >> px[i] >> py[i];

    vector<vector<D>> dist(n, vector<D>(n));
    for (L i = 0; i < n; i++)
        for (L j = 0; j < n; j++)
            dist[i][j] = hypot(px[i]-px[j], py[i]-py[j]);

    L FULL = (1 << n) - 1;
    vector<vector<D>> dp(1 << n, vector<D>(n, 1e18));
    vector<vector<L>>    par(1 << n, vector<L>(n, -1));

    dp[1][0] = 0;

    for (L mask = 1; mask <= FULL; mask++) {
        for (L u = 0; u < n; u++) {
            if (!(mask & (1 << u))) continue;
            if (dp[mask][u] >= 1e18) continue;
            for (L v = 0; v < n; v++) {
                if (mask & (1 << v)) continue;
                L newMask = mask | (1 << v);
                D nd = dp[mask][u] + dist[u][v];
                if (nd < dp[newMask][v]) {
                    dp[newMask][v] = nd;
                    par[newMask][v] = u;
                }
            }
        }
    }

    D ans = 1e18;
    L last = 0;
    for (L i = 0; i < n; i++)
        if (dp[FULL][i] < ans) { ans = dp[FULL][i]; last = i; }

    vector<L> path;
    L mask = FULL, cur = last;
    while (cur != -1) {
        path.push_back(cur);
        L prev = par[mask][cur];
        mask ^= (1 << cur);
        cur = prev;
    }
    reverse(path.begin(), path.end());

    for (L i = 0; i < n; i++) {
        cout << path[i] + 1;
        if (i + 1 < n) cout << " -> ";
    }
    cout << "\n";
    cout << fixed << setprecision(2) << ans << "\n";

    L bestCount = -1, bx = -1, by = -1;
    for (L i = 0; i < n; i++) {
        L count = 0;
        for (L j = 0; j < n; j++) {
            if (dist[i][j] <= R) count++;
        }
        if (count > bestCount ||
           (count == bestCount && px[i] < bx) ||
           (count == bestCount && px[i] == bx && py[i] < by)) {
            bestCount = count;
            bx = px[i];
            by = py[i];
        }
    }
    cout << "(" << bx << ", " << by << ")\n";
    cout << bestCount << "\n";

    L maxX = *max_element(px.begin(), px.end());
    L maxY = *max_element(py.begin(), py.end());

    vector<vector<L>> grid(maxY + 1, vector<L>(maxX + 1, 0));
    for (L i = 0; i < n; i++)
        grid[py[i]][px[i]] = 1;

    grid[by][bx] = 2;

    for (L y = maxY; y >= 0; y--) {
        for (L x = 0; x <= maxX; x++) {
            if (x) cout << " ";
            cout << grid[y][x];
        }
        cout << "\n";
    }
}