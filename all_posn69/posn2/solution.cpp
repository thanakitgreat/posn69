#include <bits/stdc++.h>
using namespace std;

typedef long long L;
typedef unsigned long long ull;

string lowered(string s) {
    for (char &c : s) c = tolower((unsigned char)c);
    return s;
}

int firstNameScore(string title, string name) {
    title = lowered(title);
    name = lowered(name);
    int m = title.size();
    int n = name.size();
    if (m > n) return 0;
    bool palindrome = equal(title.begin(), title.end(), title.rbegin());
    int count = 0;
    if (!palindrome) {
        for (int i = 0; i + m <= n; i++)
            if (name.compare(i, m, title) == 0) count++;
        return count;
    }
    array<int, 256> need{}, window{};
    for (unsigned char c : title) need[c]++;
    for (int i = 0; i < m; i++) window[(unsigned char)name[i]]++;
    if (window == need) count++;
    for (int i = m; i < n; i++) {
        window[(unsigned char)name[i]]++;
        window[(unsigned char)name[i - m]]--;
        if (window == need) count++;
    }
    return count;
}

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
        auto [r, c] = q.front();
        q.pop();
        for (int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];
            if (nr < 0 || nr >= 7 || nc < 0 || nc >= 7) continue;
            if (maze[nr][nc] == 'W' || dist[nr][nc] != -1) continue;
            dist[nr][nc] = dist[r][c] + 1;
            q.push({nr, nc});
        }
    }
    return max(dist[6][6], 0);
}

bool isTasty(ull value) {
    while (value > 0) {
        if (value % 36 >= 10) return false;
        value /= 36;
    }
    return true;
}

L nicknameScore(const string &s) {
    L total = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        ull value = 0;
        int digitSum = 0;
        for (int j = i; j < n; j++) {
            value = value * 10 + (s[j] - '0');
            digitSum += s[j] - '0';
            if (isTasty(value)) total += digitSum;
        }
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

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
