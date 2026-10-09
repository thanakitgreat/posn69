#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // Direct vectors for N, E, S, W
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    C dir_char[] = {'N', 'E', 'S', 'W'};

    int dir = 1; // Initial direction: East (E)
    L x = 0, y = 0;
    B dead = false;

    for (int i = 0; i < n; i++) {
        S cmd;
        L k;
        cin >> cmd >> k;

        if (dead) continue;

        if (cmd == "FD") {
            // Keep direction
        } else if (cmd == "RT") {
            dir = (dir + 1) % 4;
        } else if (cmd == "LT") {
            dir = (dir + 3) % 4;
        } else if (cmd == "BW") {
            dir = (dir + 2) % 4;
        }

        L nx = x + dx[dir] * k;
        L ny = y + dy[dir] * k;

        // Death condition: chạm หรือ ข้าม ขอบเขต (-50,000 <= x, y <= 50,000)
        if (abs(nx) >= 50000 || abs(ny) >= 50000) {
            dead = true;
        } else {
            x = nx;
            y = ny;
        }
    }

    if (dead) {
        cout << "DEAD\n";
    } else {
        cout << x << " " << y << "\n";
        cout << dir_char[dir] << "\n";
    }

    return 0;
}