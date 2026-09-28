#include <bits/stdc++.h>
using namespace std;

int main() {
    string bridge;
    int n;
    cin >> bridge >> n;

    vector<string> players(n);
    for (int i = 0; i < n; i++) cin >> players[i];

    vector<pair<bool, bool>> broken(bridge.size(), {false, false});

    for (int i = 0; i < n; i++) {
        string path = players[i];
        bool done = false;

        for (int step = 0; step < path.size(); step++) {
            int idx = step;
            char move = path[step];
            bool left = (move == 'L');

            if ((bridge[idx] != move) || (left && broken[idx].first) || (!left && broken[idx].second)) {
                cout << "P" << i + 1 << ":E(at" << step + 1 << ")" << endl;
                if (left) broken[idx].first = true;
                else broken[idx].second = true;
                done = true;
                break;
            }
        }

        if (!done) {
            if (path.size() < bridge.size())
                cout << "P" << i + 1 << ":F" << endl;
            else
                cout << "P" << i + 1 << ":S" << endl;
        }
    }
}
