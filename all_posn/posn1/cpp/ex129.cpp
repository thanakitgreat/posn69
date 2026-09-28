#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    map<string, vector<pair<string, double>>> c;
    set<string> g;
    for (int i = 0; i < b; ++i) {
        string h, q;
        double j, k;
        cin >> h >> q >> j >> k;
        double r = (j / 1000.0) / k;
        c[h].push_back({q, r});
        c[q].push_back({h, r});
        g.insert(h);
        g.insert(q);
    }
    string l, m;
    cin >> l >> m;

    map<string, double> d;
    map<string, string> e;

    for (const auto& node : g) {
        d[node] = numeric_limits<double>::infinity();
    }
    d[l] = 0;

    priority_queue<pair<double, string>, vector<pair<double, string>>, greater<pair<double, string>>> f;
    f.push({0.0, l});

    while (!f.empty()) {
        double s = f.top().first;
        string t = f.top().second;
        f.pop();

        if (s > d[t]) {
            continue;
        }

        if (t == m) {
            break;
        }

        for (const auto& w : c[t]) {
            string u = w.first;
            double v = w.second;
            if (d[t] + v < d[u]) {
                d[u] = d[t] + v;
                e[u] = t;
                f.push({d[u], u});
            }
        }
    }

    double r = d[m];
    int p = static_cast<int>(r);
    int q = static_cast<int>(round((r - p) * 60));

    cout << p << " hours " << q << " minutes\n";

    vector<string> o;
    string n = m;
    while (!n.empty()) {
        o.push_back(n);
        n = e[n];
    }
    reverse(o.begin(), o.end());

    for (size_t i = 0; i < o.size(); ++i) {
        cout << o[i] << (i == o.size() - 1 ? "" : " -> ");
    }
    cout << endl;

    return 0;
}