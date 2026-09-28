#include <bits/stdc++.h>
using namespace std;

typedef long long L;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);

    L hole, x, y;
    cin >> hole;

    map<L, pair<L,L>> diag1, diag2; // key -> {minX, maxX}

    auto update = [](map<L, pair<L,L>>& m, L key, L val) {
    if (!m.count(key)) m[key] = {val, val};
    else {
        m[key].first  = min(m[key].first,  val);
        m[key].second = max(m[key].second, val);
    }
};

    for (L i = 0; i < hole; i++) {
        cin >> x >> y;
        update(diag1, x - y, x);
        update(diag2, x + y, x);
    }

    L maxL = 0;
    for (auto& [k, p] : diag1) maxL = max(maxL, p.second - p.first);
    for (auto& [k, p] : diag2) maxL = max(maxL, p.second - p.first);

    cout << maxL;
}