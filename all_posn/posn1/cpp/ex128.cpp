#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    getline(cin, a);
    stringstream b(a);

    vector<int> c;
    string d;
    while (b >> d) c.push_back(d.size());

    sort(c.begin(), c.end(), [](int x, int y) {
        return to_string(x) + to_string(y) > to_string(y) + to_string(x);
    });

    for (int x : c) cout << x;
}
