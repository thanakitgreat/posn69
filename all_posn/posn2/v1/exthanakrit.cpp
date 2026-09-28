#include <bits/stdc++.h>
using namespace std;

struct Node {
    int r, c, val;
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, C;
    cin >> R >> C;

    int xr, xc, P;
    cin >> xr >> xc >> P;
    int xm, xmc, Q;
    cin >> xm >> xmc >> Q;
    int xs, xsc, N;
    cin >> xs >> xsc >> N;
    vector<vector<int>> a(R + 1, vector<int>(C + 1, 0));
    queue<Node> terra, goo;
    terra.push({xr, xc, P});
    goo.push({xm, xmc, Q});
    a[xr][xc] = P;
    a[xm][xmc] = Q;
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};
    for (int night = 0; night < N; night++) {
        vector<vector<int>> next = a;
        map<pair<int,int>, int> terra_upd, goo_upd;
        int tsize = terra.size();
        for (int i = 0; i < tsize; i++) {
            auto cur = terra.front(); terra.pop();
            if (cur.val <= 1) continue;
            for (int d = 0; d < 4; d++) {
                int nr = cur.r + dr[d];
                int nc = cur.c + dc[d];
                if (nr < 1 || nr > R || nc < 1 || nc > C) continue;
                int nv = cur.val - 1;
                if (abs(nv) > abs(terra_upd[{nr,nc}]))
                    terra_upd[{nr,nc}] = nv;
            }
        }
        int gsize = goo.size();
        for (int i = 0; i < gsize; i++) {
            auto cur = goo.front(); goo.pop();
            if (cur.val >= -1) continue;
            for (int d = 0; d < 4; d++) {
                int nr = cur.r + dr[d];
                int nc = cur.c + dc[d];
                if (nr < 1 || nr > R || nc < 1 || nc > C) continue;
                int nv = cur.val + 1;
                if (abs(nv) > abs(goo_upd[{nr,nc}]))
                    goo_upd[{nr,nc}] = nv;
            }
        }
        for (auto &t : terra_upd) {
            int r = t.first.first, c = t.first.second;
            int valT = t.second;
            int valG = goo_upd[{r, c}];

            int finalVal;
            if (valG == 0) finalVal = valT;
            else if (abs(valT) > abs(valG)) finalVal = valT;
            else if (abs(valT) < abs(valG)) finalVal = valG;
            else finalVal = 0;

            if (abs(finalVal) > abs(next[r][c])) next[r][c] = finalVal;
        }

        for (auto &g : goo_upd) {
            int r = g.first.first, c = g.first.second;
            if (terra_upd.count({r, c})) continue;
            int valG = g.second;
            if (abs(valG) > abs(next[r][c])) next[r][c] = valG;
        }

        for (int r = 1; r <= R; r++) {
            for (int c = 1; c <= C; c++) {
                if (next[r][c] > 0) terra.push({r, c, next[r][c]});
                else if (next[r][c] < 0) goo.push({r, c, next[r][c]});
            }
        }

        a = next;
    }

    int pos = 0, neg = 0;
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            if (a[i][j] > 0) pos++;
            else if (a[i][j] < 0) neg++;
        }
    }

    cout << pos << " " << neg << " " << (a[xs][xsc] >= 0 ? "SAFE" : "DANGER") << "\n";

    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}