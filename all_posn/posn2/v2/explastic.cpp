#include <bits/stdc++.h>
using namespace std;
struct Node {
    int r, c, val;
};
int R, C;
int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
bool isValid(int r, int c) {
    return r >= 1 && r <= R && c >= 1 && c <= C;
}
void spreadTerra(queue<Node>& terra, map<pair<int,int>, int>& terra_upd) {
    int tsize = terra.size();
    for (int i = 0; i < tsize; i++) {
        auto cur = terra.front(); 
        terra.pop();
        if (cur.val <= 1) continue;
        for (int d = 0; d < 4; d++) {
            int nr = cur.r + dr[d];
            int nc = cur.c + dc[d];
            if (!isValid(nr, nc)) continue;
            int nv = cur.val - 1;
            if (abs(nv) > abs(terra_upd[{nr, nc}]))
                terra_upd[{nr, nc}] = nv;
        }
    }
}
void spreadGoo(queue<Node>& goo, map<pair<int,int>, int>& goo_upd) {
    int gsize = goo.size();
    for (int i = 0; i < gsize; i++) {
        auto cur = goo.front(); 
        goo.pop();
        if (cur.val >= -1) continue;
        for (int d = 0; d < 4; d++) {
            int nr = cur.r + dr[d];
            int nc = cur.c + dc[d];
            if (!isValid(nr, nc)) continue;
            int nv = cur.val + 1;
            if (abs(nv) > abs(goo_upd[{nr, nc}]))
                goo_upd[{nr, nc}] = nv;
        }
    }
}
int resolveCollision(int terraVal, int gooVal) {
    if (gooVal == 0) return terraVal;
    if (abs(terraVal) > abs(gooVal)) return terraVal;
    if (abs(terraVal) < abs(gooVal)) return gooVal;
    return 0;
}
void applyUpdates(vector<vector<int>>& next, 
                  map<pair<int,int>, int>& terra_upd,
                  map<pair<int,int>, int>& goo_upd) {
    for (auto &t : terra_upd) {
        int r = t.first.first, c = t.first.second;
        int valT = t.second;
        int valG = goo_upd[{r, c}];
        int finalVal = resolveCollision(valT, valG);
        if (abs(finalVal) > abs(next[r][c])) 
            next[r][c] = finalVal;
    }
    for (auto &g : goo_upd) {
        int r = g.first.first, c = g.first.second;
        if (terra_upd.count({r, c})) continue;
        int valG = g.second;
        if (abs(valG) > abs(next[r][c])) 
            next[r][c] = valG;
    }
}
void rebuildQueues(queue<Node>& terra, queue<Node>& goo, 
                   const vector<vector<int>>& grid) {
    for (int r = 1; r <= R; r++) {
        for (int c = 1; c <= C; c++) {
            if (grid[r][c] > 0) 
                terra.push({r, c, grid[r][c]});
            else if (grid[r][c] < 0) 
                goo.push({r, c, grid[r][c]});
        }
    }
}
void simulateNight(vector<vector<int>>& a, queue<Node>& terra, queue<Node>& goo) {
    vector<vector<int>> next = a;
    map<pair<int,int>, int> terra_upd, goo_upd;
    spreadTerra(terra, terra_upd);
    spreadGoo(goo, goo_upd);
    applyUpdates(next, terra_upd, goo_upd);
    rebuildQueues(terra, goo, next);
    a = next;
}
void countCells(const vector<vector<int>>& grid, int& pos, int& neg) {
    pos = 0;
    neg = 0;
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            if (grid[i][j] > 0) pos++;
            else if (grid[i][j] < 0) neg++;
        }
    }
}
void printMap(const vector<vector<int>>& grid, int nightNum) {
    for (int i = 1; i <= R; i++) {
        for (int j = 1; j <= C; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> R >> C;
    int xr, xc, P,xm, xmc, Q , xs, xsc, N;
    cin >> xr >> xc >> P >> xm >> xmc >> Q >> xs >> xsc >> N;
    vector<vector<int>> a(R + 1, vector<int>(C + 1, 0));
    queue<Node> terra, goo;
    terra.push({xr, xc, P});
    goo.push({xm, xmc, Q});
    a[xr][xc] = P;
    a[xm][xmc] = Q;
    for (int night = 0; night < N; night++) {
        simulateNight(a, terra, goo);
    }
    int pos, neg;
    countCells(a, pos, neg);
    string status = (a[xs][xsc] >= 0) ? "SAFE" : "DANGER";
    cout << pos << " " << neg << " " << status << "\n";
    printMap(a, N);
    return 0;
}