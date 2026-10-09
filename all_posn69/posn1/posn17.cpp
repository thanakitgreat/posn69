 #include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

struct Constraint {
    int r1, c1, r2, c2;
    C op;
};

int grid[5][5];
vector<Constraint> cons;
vector<vector<int>> solutions;

B isValid(int r, int c, int val) {
    for (int i = 0; i < 5; i++) {
        if (grid[r][i] == val || grid[i][c] == val) return false;
    }
    grid[r][c] = val;
    for (const auto& ct : cons) {
        int v1 = grid[ct.r1][ct.c1];
        int v2 = grid[ct.r2][ct.c2];
        if (v1 != 0 && v2 != 0) {
            if (ct.op == '<' && !(v1 < v2)) { grid[r][c] = 0; return false; }
            if (ct.op == '>' && !(v1 > v2)) { grid[r][c] = 0; return false; }
        }
    }
    grid[r][c] = 0;
    return true;
}

void backtrack(int idx) {
    if (solutions.size() > 1) return;
    if (idx == 25) {
        vector<int> flat;
        for (int r = 0; r < 5; r++) {
            for (int c = 0; c < 5; c++) flat.push_back(grid[r][c]);
        }
        solutions.push_back(flat);
        return;
    }
    int r = idx / 5, c = idx % 5;
    if (grid[r][c] != 0) {
        backtrack(idx + 1);
    } else {
        for (int val = 1; val <= 5; val++) {
            if (isValid(r, c, val)) {
                grid[r][c] = val;
                backtrack(idx + 1);
                grid[r][c] = 0;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    for (int i = 0; i < 5; i++) {
        S line;
        if (!(cin >> line)) return 0;
        if (line.length() == 5) {
            for (int j = 0; j < 5; j++) grid[i][j] = line[j] - '0';
        } else {
            grid[i][0] = stoi(line);
            for (int j = 1; j < 5; j++) cin >> grid[i][j];
        }
    }

    int M;
    if (!(cin >> M)) return 0;
    for (int i = 0; i < M; i++) {
        S raw;
        cin >> raw;
        Constraint ct;
        if (raw.length() >= 5) {
            ct.r1 = raw[0] - '1';
            ct.c1 = raw[1] - '1';
            ct.r2 = raw[2] - '1';
            ct.c2 = raw[3] - '1';
            ct.op = raw[4];
        } else {
            ct.r1 = stoi(raw) - 1;
            cin >> ct.c1 >> ct.r2 >> ct.c2 >> ct.op;
            ct.c1--; ct.r2--; ct.c2--;
        }
        cons.push_back(ct);
    }

    B init_valid = true;
    for (const auto& ct : cons) {
        int v1 = grid[ct.r1][ct.c1];
        int v2 = grid[ct.r2][ct.c2];
        if (v1 != 0 && v2 != 0) {
            if (ct.op == '<' && !(v1 < v2)) init_valid = false;
            if (ct.op == '>' && !(v1 > v2)) init_valid = false;
        }
    }

    if (init_valid) backtrack(0);

    if (solutions.size() == 1) {
        for (int r = 0; r < 5; r++) {
            for (int c = 0; c < 5; c++) cout << solutions[0][r * 5 + c] << " ";
            cout << "\n";
        }
    } else {
        cout << "Invalid puzzle\n";
    }

    return 0;
}