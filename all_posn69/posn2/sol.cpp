#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef unsigned long long ull;

string lower(string s) { for (char& c : s) c = tolower(c); return s; }
int firstScore(string title, string first) {
    title = lower(title); first = lower(first);
    int m = title.size(), cnt = 0;
    bool pal = (title == string(title.rbegin(), title.rend()));
    array<int, 26> need{}; for (char c : title) need[c - 'a']++;
    for (int i = 0; i + m <= (int)first.size(); i++) {
        if (!pal) { if (first.compare(i, m, title) == 0) cnt++; continue; }
        array<int, 26> have{}; for (int k = 0; k < m; k++) have[first[i + k] - 'a']++;
        if (have == need) cnt++;
    }
    return cnt;
}

int lastScore(const vector<string>& g) {
    if (g[0][0] == 'W' || g[6][6] == 'W') return 0;
    int d[7][7]; memset(d, -1, sizeof d);
    queue<pair<int,int>> q; q.push({0, 0}); d[0][0] = 0;
    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 0 || ny < 0 || nx >= 7 || ny >= 7 || g[nx][ny] == 'W' || d[nx][ny] >= 0) continue;
            d[nx][ny] = d[x][y] + 1; q.push({nx, ny});
        }
    }
    return max(0, d[6][6]);
}

bool tasty(ull v) {
    while (v > 0) { if (v % 36 >= 10) return false; v /= 36; }
    return true;
}
int nickScore(const string& s) {
    int total = 0, n = s.size();
    for (int i = 0; i < n; i++) {
        ull v = 0; int ds = 0;
        for (int j = i; j < n; j++) {
            v = v * 10 + (s[j] - '0'); ds += s[j] - '0';
            if (tasty(v)) total += ds;
        }
    }
    return total;
}

int H, n, M;
vector<vector<int>> a;
vector<int> cap, food, who;
unordered_set<ull> failed;
int deepest = 0;

ull key(int k, const array<int, 4>& ld) {
    return ((ull)k << 27) | ((ull)ld[0] << 18) | ((ull)ld[1] << 9) | (ull)ld[2];
}
bool place(int k, array<int, 4>& ld) {
    deepest = max(deepest, k);
    if (k == M) return true;
    ull e = key(k, ld);
    if (failed.count(e)) return false;
    for (int b = 0; b < n; b++) {
        if (ld[b] + food[k] > cap[b]) continue;
        ld[b] += food[k]; who[k] = b;
        if (place(k + 1, ld)) return true;
        ld[b] -= food[k];
    }
    failed.insert(e);
    return false;
}

int main(int argc, char** argv) {
    cin >> H >> n;
    a.resize(H);
    for (int i = 0; i < H; i++) {
        int w; cin >> w; a[i].resize(w);
        for (int& x : a[i]) cin >> x;
    }
    int f, r; cin >> f >> r;
    vector<L> eff(n);
    for (int b = 0; b < n; b++) {
        string title, first, nick; vector<string> g(7);
        cin >> title >> first;
        for (auto& row : g) cin >> row;
        cin >> nick;
        eff[b] = (L)firstScore(title, first) * lastScore(g) + nickScore(nick);
    }
    if (argc > 1) { for (int b = 0; b < n; b++) fprintf(stderr, "%lld ", eff[b]); fprintf(stderr, "\n"); }
    vector<pair<int,int>> route;
    for (int i = 1; i <= f; i++) route.push_back({i, 1});
    for (int j = 2; j <= r; j++) route.push_back({f, j});
    M = route.size();
    int total = 0;
    for (auto [i, j] : route) { food.push_back(a[i - 1][j - 1]); total += food.back(); }
    cap.resize(n);
    for (int b = 0; b < n; b++) cap[b] = (int)min<L>(eff[b], total);   // เก็บเกินยอดรวมไม่มีประโยชน์
    who.assign(M, -1);
    array<int, 4> ld{0, 0, 0, 0};
    if (place(0, ld)) {
        puts("YES");
        array<int, 4> used{0, 0, 0, 0};
        for (int k = 0; k < M; k++) used[who[k]] += food[k];
        for (int b = 0; b < n; b++) printf("%d %d\n", b + 1, used[b]);
    } else {
        puts("NO");
        printf("%d %d\n", route[deepest].first, route[deepest].second);
    }
}
