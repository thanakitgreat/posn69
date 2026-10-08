#include <bits/stdc++.h>
using namespace std;

typedef long long L;

string lowered(string s) {
    for (char &c : s) c = tolower((unsigned char)c);
    return s;
}

// Fix 1: Replaced frequency-based sliding window with exact substring matching
int firstNameScore(string title, string name) {
    title = lowered(title);
    name = lowered(name);
    int m = title.size();
    int n = name.size();
    if (m == 0 || m > n) return 0;
    int count = 0;
    for (int i = 0; i + m <= n; i++) {
        if (name.compare(i, m, title) == 0) {
            count++;
        }
    }
    return count;
}

// Fix 3: Added direct target check and explicit non-reachability returning 0
int shortestPath(const array<string, 7> &maze) {
    if (maze[0][0] == 'W' || maze[6][6] == 'W') return 0;
    int dist[7][7];
    for (auto &row : dist) fill(begin(row), end(row), -1);
    queue<pair<int, int>> q;
    dist[0][0] = 0;
    q.push({0, 0});
    const int dr[] = {1, -1, 0, 0};
    const int dc[] = {0, 0, 1, -1};
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();
        if (r == 6 && c == 6) return dist[r][c];
        for (int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];
            if (nr < 0 || nr >= 7 || nc < 0 || nc >= 7) continue;
            if (maze[nr][nc] == 'W' || dist[nr][nc] != -1) continue;
            dist[nr][nc] = dist[r][c] + 1;
            q.push({nr, nc});
        }
    }
    return dist[6][6] == -1 ? 0 : dist[6][6];
}

// Fix 2: BigInteger string division by 36 to prevent 64-bit integer overflow
bool isTasty(string numStr) {
    while (!numStr.empty() && numStr != "0") {
        int rem = 0;
        string nextStr = "";
        for (char c : numStr) {
            int cur = rem * 10 + (c - '0');
            int q = cur / 36;
            rem = cur % 36;
            if (!nextStr.empty() || q > 0) {
                nextStr.push_back('0' + q);
            }
        }
        if (rem >= 10) return false;
        numStr = nextStr;
    }
    return true;
}

L nicknameScore(const string &s) {
    L total = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int digitSum = 0;
        string sub = "";
        for (int j = i; j < n; j++) {
            sub += s[j];
            digitSum += (s[j] - '0');
            if (isTasty(sub)) {
                total += digitSum;
            }
        }
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<L> food(k);
    for (L &x : food) cin >> x;

    L capacity = 0;
    for (int i = 0; i < n; i++) {
        string title, name, nickname;
        array<string, 7> maze;
        cin >> title >> name;
        for (string &row : maze) {
            row.resize(7);
            for (char &c : row) cin >> c;
        }
        cin >> nickname;
        capacity += (L)firstNameScore(title, name) * shortestPath(maze) + nicknameScore(nickname);
    }

    for (int i = 0; i < k; i++) {
        if (food[i] > capacity) {
            cout << "ANGRY\n" << i + 1 << "\n";
            return 0;
        }
        capacity -= food[i];
    }
    cout << "HAPPY\n" << capacity << "\n";
    return 0;
}