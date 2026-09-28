#include <bits/stdc++.h>
using namespace std;

double dist(const pair<int, int>& a, const pair<int, int>& b) {
    return sqrt((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second));
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,r,max_y=0,max_x=0;
    vector<pair<int,int>> enemy;
    cin >> n >> r;
    for (int i=0;i<n;i++) {
        int x, y;
        cin >> x >> y;
        enemy.push_back({x, y});
    }
    for (auto& elem : enemy) {
        if (elem.second > max_y) {
            max_y = elem.second;
        }
        if (elem.first > max_x) {
            max_x = elem.first;
        }
    }
    vector<vector<int>> matrix(max_y+1, vector<int>(max_x+1, 0));
    for (int i=0;i<max_y+1;i++) {
        for (int v=0;v<max_x+1;v++) {
            for (auto& elem : enemy) {
                if (v == elem.first && i == elem.second) {
                    matrix[i][v] = 1;
                }
            }
        }
    }
    vector<int> perm;
    for (int i = 1; i < n; ++i) perm.push_back(i);
    double min_path = 1e18;
    vector<int> best_perm;
    while (next_permutation(perm.begin(), perm.end())) {
        double path = 0;
        int prev = 0;
        for (int idx : perm) {
            path += dist(enemy[prev], enemy[idx]);
            prev = idx;
        }
        if (max_y==0) {
            min_path = max_x;
            best_perm.clear();
            for (int i=1;i<enemy.size();i++) best_perm.push_back(i);
            break;
        }
        if (path < min_path) {
            min_path = path;
            best_perm = perm;
        }
    };


    int max_bomb = 0;
    pair<int,int> bomb_point = {1001, 1001};
    for (int x = 0; x <= max_x; ++x) {
        for (int y = 0; y <= max_y; ++y) {
            int cnt = 0;
            for (int j = 0; j < n; ++j) {
                if (dist({x, y}, enemy[j]) <= r + 1e-8) cnt++;
            }
            if (cnt > max_bomb ||
                (cnt == max_bomb && make_pair(x, y) < bomb_point)) {
                max_bomb = cnt;
                bomb_point = {x, y};
            }
        }
    }
    cout << 1;
    for (int idx : best_perm) {
        cout << " -> " << (idx + 1);
    }
    cout << endl;

    matrix[bomb_point.second][bomb_point.first] = 2;
    cout.precision(2);
    cout << fixed << min_path << endl;
    cout.precision(0);
    cout << "(" << bomb_point.first << ", " << bomb_point.second << ")" << endl;
    cout << max_bomb << endl;
    for (int i=0;i<max_y+1;i++) {
        for (int v=0;v<max_x+1;v++) {
            cout << matrix[i][v] << " ";
        }
        cout << endl;
    }

    return 0;
}