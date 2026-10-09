#include <bits/stdc++.h>
using namespace std;
typedef long long L;
typedef double D;
typedef string S;
typedef char C;
typedef bool B;

struct Alien {
    double x, y;
    B alive;
};

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int N, M, l;
    if (!(cin >> N >> M >> l)) return 0;

    vector<double> ranges(5);
    for (int i = 1; i <= 4; i++) {
        cin >> ranges[i];
    }

    vector<Alien> aliens(l);
    for (int i = 0; i < l; i++) {
        cin >> aliens[i].x >> aliens[i].y;
        aliens[i].alive = true;
    }

    vector<pair<double, double>> soldier_pos(5, {0.0, 0.0});

    S action;
    while (cin >> action && action != "-1") {
        if (action == "move") {
            int a;
            double x, y;
            cin >> a >> x >> y;
            soldier_pos[a] = {x, y};
        } else if (action == "attack") {
            int b;
            cin >> b;
            double sx = soldier_pos[b].first;
            double sy = soldier_pos[b].second;
            double r = ranges[b];

            for (int i = 0; i < l; i++) {
                if (aliens[i].alive) {
                    double dist = sqrt((sx - aliens[i].x) * (sx - aliens[i].x) + (sy - aliens[i].y) * (sy - aliens[i].y));
                    if (dist <= r) {
                        aliens[i].alive = false;
                    }
                }
            }
        }
    }

    int remaining = 0;
    for (int i = 0; i < l; i++) {
        if (aliens[i].alive) remaining++;
    }

    if (remaining == 0) {
        cout << "Mission Complete\n";
    } else {
        for (int i = 0; i < l; i++) {
            if (aliens[i].alive) {
                cout << (int)aliens[i].x << " " << (int)aliens[i].y << "\n";
            }
        }
    }

    return 0;
}