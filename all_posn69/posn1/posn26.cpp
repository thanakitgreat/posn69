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

    int f, c, w;
    if (!(cin >> f >> c >> w)) return 0;

    int h;
    cin >> h;

    S weakness;
    cin >> weakness;

    int n_weak = 0, n_other = 0;
    if (weakness == "phy") {
        n_weak = f;
        n_other = c + w;
    } else if (weakness == "holy") {
        n_weak = c;
        n_other = f + w;
    } else if (weakness == "magic") {
        n_weak = w;
        n_other = f + c;
    }

    queue<int> q;
    for (int i = 0; i < n_weak; i++) q.push(10);
    for (int i = 0; i < n_other; i++) q.push(5);

    int attacks = 0;
    while (h > 0) {
        int dmg = q.front();
        q.pop();
        h -= dmg;
        attacks++;
        q.push(dmg);
    }

    cout << attacks << "\n";
    return 0;
}